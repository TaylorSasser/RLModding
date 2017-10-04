#include "CustomBlog.h"
#include <string>
#include "../Interfaces/Interfaces.h"

CustomBlog::CustomBlog(std::string name, int key, Category category, GameState gamestate) : ModBase(name, key, category, gamestate) {}
CustomBlog::~CustomBlog() {}

void CustomBlog::onEnable() {

}

void CustomBlog::onDisable() {
}

void CustomBlog::ExportSettings(pt::ptree root) {
	// Carousel Settings
	root.put("Carousel_Title", std::string(carousel_title));
	root.put("Carousel_Body", std::string(carousel_body));
	root.put("Carousel_IMG", std::string(carousel_ImageUrl));
	root.put("Carousel_URL", std::string(carousel_URL));

	// RLCS Settings
	root.put("RLCS_Title", std::string(RLCS_title));
	root.put("RLCS_Body", std::string(RLCS_body));
	root.put("RLCS_IMG", std::string(RLCS_ImageUrl));
	root.put("RLCS_URL", std::string(RLCS_URL));

	// Community Settings
	root.put("Comm_Title", std::string(Comm_title));
	root.put("Comm_Body", std::string(Comm_body));
	root.put("Comm_IMG", std::string(Comm_ImageUrl));
	root.put("Comm_URL", std::string(Comm_URL));

	// Message of the day
	root.put("MOTD", std::string(motd));

}
void CustomBlog::ImportSettings(pt::ptree root) {
	// Carousel Settings
	std::strcpy(carousel_title, root.get<std::string>("Carousel_Title", std::string(carousel_title)).c_str());
	std::strcpy(carousel_body, root.get<std::string>("Carousel_Body", std::string(carousel_body)).c_str());
	std::strcpy(carousel_ImageUrl, root.get<std::string>("Carousel_IMG", std::string(carousel_ImageUrl)).c_str());
	std::strcpy(carousel_URL, root.get<std::string>("Carousel_URL", std::string(carousel_URL)).c_str());

	// RLCS Settings
	std::strcpy(RLCS_title, root.get<std::string>("RLCS_Title", std::string(RLCS_title)).c_str());
	std::strcpy(RLCS_body, root.get<std::string>("RLCS_Body", std::string(RLCS_body)).c_str());
	std::strcpy(RLCS_ImageUrl, root.get<std::string>("RLCS_IMG", std::string(RLCS_ImageUrl)).c_str());
	std::strcpy(RLCS_URL, root.get<std::string>("RLCS_URL", std::string(RLCS_URL)).c_str());

	// Community Settings
	std::strcpy(Comm_title, root.get<std::string>("Comm_Title", std::string(Comm_title)).c_str());
	std::strcpy(Comm_body, root.get<std::string>("Comm_Body", std::string(Comm_body)).c_str());
	std::strcpy(Comm_ImageUrl, root.get<std::string>("Comm_IMG", std::string(Comm_ImageUrl)).c_str());
	std::strcpy(Comm_URL, root.get<std::string>("Comm_URL", std::string(Comm_URL)).c_str());

	// MOTD
	std::strcpy(motd, root.get<std::string>("MOTD", std::string(motd)).c_str());


}

void CustomBlog::DrawMenu() {
	ImGui::Begin("Custom Blog", &p_open, ImVec2(400, 300), 0.75f);
		ImGui::InputText("Carousel Title", carousel_title, IM_ARRAYSIZE(carousel_title));
		ImGui::InputText("Carousel Body", carousel_body, IM_ARRAYSIZE(carousel_body));
		ImGui::InputText("Carousel Link", carousel_URL, IM_ARRAYSIZE(carousel_URL));
		ImGui::InputText("Carousel Image Url", carousel_ImageUrl, IM_ARRAYSIZE(carousel_ImageUrl));
	ImGui::Separator();
		ImGui::InputText("RLCS Title", RLCS_title, IM_ARRAYSIZE(RLCS_title));
		ImGui::InputText("RLCS Body", RLCS_body, IM_ARRAYSIZE(RLCS_body));
		ImGui::InputText("RLCS Link", RLCS_URL, IM_ARRAYSIZE(RLCS_URL));
		ImGui::InputText("RLCS Image Url", RLCS_ImageUrl, IM_ARRAYSIZE(RLCS_ImageUrl));
	ImGui::Separator();
		ImGui::InputText("Community Title", Comm_title, IM_ARRAYSIZE(Comm_title));
		ImGui::InputText("Community Body", Comm_body, IM_ARRAYSIZE(Comm_body));
		ImGui::InputText("Community Link", Comm_URL, IM_ARRAYSIZE(Comm_URL));
		ImGui::InputText("Community Image Url", Comm_ImageUrl, IM_ARRAYSIZE(Comm_ImageUrl));
	ImGui::Separator();
	ImGui::InputText("MOTD", motd, IM_ARRAYSIZE(motd));
	
	if (ImGui::Button("Apply")) {
		bSet = true;
		printf("Applying cutsom blog options");
	}
	if (ImGui::IsItemHovered())
		ImGui::SetTooltip("Note: Blog may take a while to update");
	
	if (!p_open) {
		this->enabled = false;
		p_open = true;
	}
	ImGui::End();
	
		
		
}

void CustomBlog::onMainMenuTick(Event* event) {
	if (bSet) {
		UGFxData_Community_TA* gfx = (UGFxData_Community_TA*)Utils::GetInstanceOf(UGFxData_Community_TA::StaticClass());
		UBlogTiles_X* blog = (UBlogTiles_X*)Utils::GetInstanceOf(UBlogTiles_X::StaticClass());
		if (blog) {
			TArray<class UBlogTile_X*> CarouselTiles = blog->CarouselTiles;
			for (int i = 0; i < CarouselTiles.Num(); i++) {
				if (CarouselTiles.IsValidIndex(i)) {
					CarouselTiles[i]->Title = Utils::to_fstring(carousel_title);
					CarouselTiles[i]->Description = Utils::to_fstring(carousel_body);
					CarouselTiles[i]->WebURL = Utils::to_fstring(carousel_URL);
					CarouselTiles[i]->ImageURL = Utils::to_fstring(carousel_ImageUrl);
				}
			}
			TArray<class UBlogTile_X*> RLCSTiles = blog->RLCSTiles;
			for (int i = 0; i < RLCSTiles.Num(); i++) {
				if (RLCSTiles.IsValidIndex(i)) {
					RLCSTiles[i]->Title = Utils::to_fstring(RLCS_title);
					RLCSTiles[i]->Description = Utils::to_fstring(RLCS_body);
					RLCSTiles[i]->WebURL = Utils::to_fstring(RLCS_URL);
					RLCSTiles[i]->ImageURL = Utils::to_fstring(RLCS_ImageUrl);
				}
			}
			TArray<class UBlogTile_X*> CommunityTiles = blog->CommunityTiles;
			for (int i = 0; i < CommunityTiles.Num(); i++) {
				if (CommunityTiles.IsValidIndex(i)) {
					CommunityTiles[i]->Title = Utils::to_fstring(Comm_title);
					CommunityTiles[i]->Description = Utils::to_fstring(Comm_body);
					CommunityTiles[i]->WebURL = Utils::to_fstring(Comm_URL);
					CommunityTiles[i]->ImageURL = Utils::to_fstring(Comm_ImageUrl);
				}
			}
			blog->MotD = Utils::to_fstring(motd);
		}
		bSet = false;
	}
	
	
	//blog->MotD = Utils::to_fstring(motd);
	//Old custom blog method doesnt work anymore. TODO: Find new way.
}