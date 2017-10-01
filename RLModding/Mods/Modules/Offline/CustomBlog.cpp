#include "CustomBlog.h"
#include "../Interfaces/Interfaces.h"

CustomBlog::CustomBlog(std::string name, int key, Category category, GameState gamestate) : ModBase(name, key, category, gamestate) {}
CustomBlog::~CustomBlog() {}

void CustomBlog::onEnable() {
	bSet = true;
}

void CustomBlog::onDisable() {
	bSet = false;
	printf("Custom blog disabled\n");
}

void CustomBlog::DrawMenu() {
	ImGui::Begin("Custom Blog Menu", &p_open, ImVec2(400, 300), 0.75f);
	ImGui::InputText("Title", title, IM_ARRAYSIZE(title));
	ImGui::InputTextMultiline("Body", body, IM_ARRAYSIZE(body));
	ImGui::InputText("Link", URL, IM_ARRAYSIZE(URL));
	ImGui::InputText("Image Url", ImageUrl, IM_ARRAYSIZE(ImageUrl));
	ImGui::InputText("MOTD", motd, IM_ARRAYSIZE(motd));
	if (ImGui::Button("Hide Blog")) {
		body[0] = '\0';
	}
	if (!p_open) {
		this->enabled = false;
		p_open = true;
	}
	ImGui::End();
	
		
		
}

void CustomBlog::onMainMenuTick(Event* event) {
	/*
	UBlogTiles_X* blog = (UBlogTiles_X*)Utils::GetInstanceOf(UBlogTiles_X::StaticClass());
	TArray<class UBlogTile_X*> CarouselTiles = blog->CarouselTiles;
	for (int i = 0; i < CarouselTiles.Num(); i++) {
		if (CarouselTiles.IsValidIndex(i)) {
			CarouselTiles[i]->Title = Utils::to_fstring(title);
			CarouselTiles[i]->Description = Utils::to_fstring(body);
			CarouselTiles[i]->WebURL = Utils::to_fstring(URL);
			CarouselTiles[i]->ImageURL = Utils::to_fstring(ImageUrl);
		}
	}
	*/
	//blog->MotD = Utils::to_fstring(motd);
	//Old custom blog method doesnt work anymore. TODO: Find new way.
}