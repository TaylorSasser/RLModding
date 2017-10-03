#include "CustomBlog.h"
#include "../Interfaces/Interfaces.h"

CustomBlog::CustomBlog(std::string name, int key, Category category, GameState gamestate) : ModBase(name, key, category, gamestate) {}
CustomBlog::~CustomBlog() {}

void CustomBlog::onEnable() {

}

void CustomBlog::onDisable() {
}

void CustomBlog::ExportSettings(pt::ptree) {}
void CustomBlog::ImportSettings(pt::ptree) {}

void CustomBlog::DrawMenu() {
	ImGui::Begin("Custom Blog", &p_open, ImVec2(400, 300), 0.75f);
	if (ImGui::CollapsingHeader("Carousel Tile Settings")) {
		ImGui::InputText("Title", carousel_title, IM_ARRAYSIZE(carousel_title));
		ImGui::InputText("Body", carousel_body, IM_ARRAYSIZE(carousel_body));
		ImGui::InputText("Link", carousel_URL, IM_ARRAYSIZE(carousel_URL));
		ImGui::InputText("Image Url", carousel_ImageUrl, IM_ARRAYSIZE(carousel_ImageUrl));
	}
	ImGui::Separator();
	if (ImGui::CollapsingHeader("RLCS Tile Settings")) {
		ImGui::InputText("Title", RLCS_title, IM_ARRAYSIZE(RLCS_title));
		ImGui::InputText("Body", RLCS_body, IM_ARRAYSIZE(RLCS_body));
		ImGui::InputText("Link", RLCS_URL, IM_ARRAYSIZE(RLCS_URL));
		ImGui::InputText("Image Url", RLCS_ImageUrl, IM_ARRAYSIZE(RLCS_ImageUrl));
	}
	ImGui::Separator();
	if (ImGui::CollapsingHeader("Community Tile Settings")) {
		ImGui::InputText("Title", Comm_title, IM_ARRAYSIZE(Comm_title));
		ImGui::InputText("Body", Comm_body, IM_ARRAYSIZE(Comm_body));
		ImGui::InputText("Link", Comm_URL, IM_ARRAYSIZE(Comm_URL));
		ImGui::InputText("Image Url", Comm_ImageUrl, IM_ARRAYSIZE(Comm_ImageUrl));
	}
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