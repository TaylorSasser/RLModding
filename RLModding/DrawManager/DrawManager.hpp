#pragma once
/* Credit goes to CSGO simple & MarkHC for this class */

#include <memory>
#include <string>
#include <vector>
#include <windows.h>

#include <d3d9.h>
#include "../Libs/ImGUI/imgui.h"
#include "../Libs/ImGUI/imgui_internal.h"

#define RGBA(r, g, b, a) ((a << 24) | (b << 16) | (g << 8) | r)

enum text_flags
{
	centered_x = 1,
	centered_y = 2,
	outline = 4,
	drop_shadow = 8
};

DEFINE_ENUM_FLAG_OPERATORS(text_flags)

class DrawManager
{
public:
	DrawManager::DrawManager();
	DrawManager::~DrawManager();

	void CreateObjects();
	void InvalidateObjects();
	void BeginRendering();
	void EndRendering();

	void AddText(ImVec2 point, ImU32 color, text_flags flags, const char* format, ...);
	void AddRect(const ImVec2& a, float w, float h, ImU32 col, float rounding = 0.0f, int rounding_corners_flags = ~0, float thickness = 1.0f) const;

	void AddLine(const ImVec2& a, const ImVec2& b, ImU32 col, float thickness = 1.0f) const;
	void AddRect(const ImVec2& a, const ImVec2& b, ImU32 col, float rounding = 0.0f, int rounding_corners_flags = ~0, float thickness = 1.0f) const;
	void AddRectFilled(const ImVec2& a, const ImVec2& b, ImU32 col, float rounding = 0.0f, int rounding_corners_flags = ~0) const;
	void AddRectFilledMultiColor(const ImVec2& a, const ImVec2& b, ImU32 col_upr_left, ImU32 col_upr_right, ImU32 col_bot_right, ImU32 col_bot_left) const;
	void AddQuad(const ImVec2& a, const ImVec2& b, const ImVec2& c, const ImVec2& d, ImU32 col, float thickness = 1.0f) const;
	void AddQuadFilled(const ImVec2& a, const ImVec2& b, const ImVec2& c, const ImVec2& d, ImU32 col) const;
	void AddTriangle(const ImVec2& a, const ImVec2& b, const ImVec2& c, ImU32 col, float thickness = 1.0f) const;
	void AddTriangleFilled(const ImVec2& a, const ImVec2& b, const ImVec2& c, ImU32 col) const;
	void AddCircle(const ImVec2& centre, float radius, ImU32 col, int num_segments = 12, float thickness = 1.0f) const;
	void AddCircleFilled(const ImVec2& centre, float radius, ImU32 col, int num_segments = 12) const;
	void AddPolyline(const ImVec2* points, const int num_points, ImU32 col, bool closed, float thickness, bool anti_aliased) const;
	void AddConvexPolyFilled(const ImVec2* points, const int num_points, ImU32 col, bool anti_aliased) const;
	void AddBezierCurve(const ImVec2& pos0, const ImVec2& cp0, const ImVec2& cp1, const ImVec2& pos1, ImU32 col, float thickness, int num_segments = 0) const;
	ImDrawData* GetDrawData();

	bool isInitialized() const { return initalized; }

	void Initialize(IDirect3DDevice9* device) {
		_device = device;
		_texture = nullptr;
		_drawList = nullptr;

		if (device != nullptr) {
			initalized = true;
			printf("Device address %p\n", device);
		}
		else {
			initalized = false;
		}
	}

	static DrawManager* Instance() {
		if (!instance) instance = new DrawManager();
		return instance;
	}

private:
	bool initalized = false;
	static DrawManager* instance;


	IDirect3DDevice9*   _device;
	IDirect3DTexture9*  _texture;
	ImDrawList*         _drawList;
	ImDrawData          _drawData;
	ImFontAtlas         _fonts;

	const std::string   FontName = "Tahoma";
	const float         FontSize = 20.0f;
};
