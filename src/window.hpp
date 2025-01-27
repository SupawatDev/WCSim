#ifndef WINDOW_H
#define WINDOW_H

class GLFWwindow;
class Engine;

class Window{

public:

    Window(int width, int height);
    ~Window();
    void Run();
    void AssignEngine(Engine * engine);
    void RemoveEngine();
    static void FrameBufferSizeCallback(GLFWwindow* window, int width, int height);
    
    unsigned int GetWindowWidth() const;
    unsigned int GetWindowHeight() const;
    GLFWwindow * GetGLFWWindow() const;
    void Resize(int width, int height);
private:

    GLFWwindow * glfw_window_;
    Engine * engine_;
    unsigned int width_;
    unsigned int height_;

    void UpdateVisualComponents();

    void VisualizeComponents();

    void OnKeysPressed();
};
#endif //!WINDOW_H