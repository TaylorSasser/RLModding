#include "CustomBlog.h"

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
	ImGui::Begin("Custom Blog Menu", 0, ImVec2(400, 300), 0.75f);
	ImGui::InputText("Title", title, IM_ARRAYSIZE(title));
	ImGui::InputTextMultiline("Body", body, IM_ARRAYSIZE(body));
	ImGui::InputText("Youtube URL", youtubeURL, IM_ARRAYSIZE(youtubeURL));
	ImGui::InputText("Youtube Title", youtubeTitle, IM_ARRAYSIZE(youtubeTitle));
	ImGui::InputText("MOTD", motd, IM_ARRAYSIZE(motd));
	if (ImGui::Button("Hide Blog")) {
		body[0] = '\0';
	}
	ImGui::End();
		
		
}

void CustomBlog::onMainMenuTick(Event* event) {
	UGFxData_Community_TA* community = (UGFxData_Community_TA*)Utils::GetInstanceOf(UGFxData_Community_TA::StaticClass());
	UOnlineGameBlog_X* blog = (UOnlineGameBlog_X*)Utils::GetInstanceOf(UOnlineGameBlog_X::StaticClass());
	
	if (bSet && blog && community) {
		blog->BlogTitle = Utils::to_fstring(title);
		blog->BlogBody = Utils::to_fstring(body);
		blog->YouTubeURL = Utils::to_fstring(youtubeURL);
		blog->YouTubeTitle = Utils::to_fstring(youtubeTitle);
		blog->MotD = Utils::to_fstring(motd);
		community->UpdateBlogText();
	}
}