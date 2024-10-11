#pragma once
#include <stdbool.h>

// - OpenGL 2
// Follow "Getting Started" link and check examples/ folder to learn about using backends!
bool     imgui_backend_OpenGL2_Init();
void     imgui_backend_OpenGL2_Shutdown();
void     imgui_backend_OpenGL2_NewFrame();
void     imgui_backend_OpenGL2_RenderDrawData(void* draw_data);
// Called by Init/NewFrame/Shutdown
bool     imgui_backend_OpenGL2_CreateFontsTexture();
void     imgui_backend_OpenGL2_DestroyFontsTexture();
bool     imgui_backend_OpenGL2_CreateDeviceObjects();
void     imgui_backend_OpenGL2_DestroyDeviceObjects();

// - OpenGL 3
// Follow "Getting Started" link and check examples/ folder to learn about using backends!
bool     imgui_backend_OpenGL3_Init(const char* glsl_version);
void     imgui_backend_OpenGL3_Shutdown();
void     imgui_backend_OpenGL3_NewFrame();
void     imgui_backend_OpenGL3_RenderDrawData(void* draw_data);

// (Optional) Called by Init/NewFrame/Shutdown
bool     imgui_backend_OpenGL3_CreateFontsTexture();
void     imgui_backend_OpenGL3_DestroyFontsTexture();
bool     imgui_backend_OpenGL3_CreateDeviceObjects();
void     imgui_backend_OpenGL3_DestroyDeviceObjects();