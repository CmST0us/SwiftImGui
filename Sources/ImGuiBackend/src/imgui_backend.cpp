#include "imgui_backend.h"
#include "imgui_impl_opengl2.h"
#include "imgui_impl_opengl3.h"

// - OpenGL 2
// Follow "Getting Started" link and check examples/ folder to learn about using backends!
bool imgui_backend_OpenGL2_Init() {
    return ImGui_ImplOpenGL2_Init();
}
void imgui_backend_OpenGL2_Shutdown() {
    imgui_backend_OpenGL2_Shutdown();
}
void imgui_backend_OpenGL2_NewFrame() {
    ImGui_ImplOpenGL2_NewFrame();
}
// Called by Init/NewFrame/Shutdown
bool imgui_backend_OpenGL2_CreateFontsTexture() {
    return ImGui_ImplOpenGL2_CreateFontsTexture();
}
void imgui_backend_OpenGL2_DestroyFontsTexture() {
    ImGui_ImplOpenGL2_DestroyFontsTexture();
}
bool imgui_backend_OpenGL2_CreateDeviceObjects() {
    return ImGui_ImplOpenGL2_CreateDeviceObjects();
}
void imgui_backend_OpenGL2_DestroyDeviceObjects() {
    ImGui_ImplOpenGL2_DestroyDeviceObjects();
}

// - OpenGL 3
// Follow "Getting Started" link and check examples/ folder to learn about using backends!
bool imgui_backend_OpenGL3_Init(const char* glsl_version) {
    return ImGui_ImplOpenGL3_Init(glsl_version);
}
void imgui_backend_OpenGL3_Shutdown() {
    ImGui_ImplOpenGL3_Shutdown();
}
void imgui_backend_OpenGL3_NewFrame() {
    ImGui_ImplOpenGL3_NewFrame();
}

// (Optional) Called by Init/NewFrame/Shutdown
bool imgui_backend_OpenGL3_CreateFontsTexture() {
    return ImGui_ImplOpenGL3_CreateFontsTexture();
}
void imgui_backend_OpenGL3_DestroyFontsTexture() {
    ImGui_ImplOpenGL3_DestroyFontsTexture();
}
bool imgui_backend_OpenGL3_CreateDeviceObjects() {
    return ImGui_ImplOpenGL3_CreateDeviceObjects();
}
void imgui_backend_OpenGL3_DestroyDeviceObjects() {
    ImGui_ImplOpenGL3_DestroyDeviceObjects();
}
