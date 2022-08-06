#include <vulkan/vulkan.h>

static VkInstance instance;

// just create a non-static function to check if linking against vulkan works
// but don't call it as we are missing a GLFW context which leads to segfault
void initInstance()
{
    VkApplicationInfo appInfo;
    appInfo.sType = VK_STRUCTURE_TYPE_APPLICATION_INFO;
    appInfo.pApplicationName = "Hello Triangle";
    appInfo.applicationVersion = VK_MAKE_VERSION(1, 0, 0);
    appInfo.pEngineName = "No Engine";
    appInfo.engineVersion = VK_MAKE_VERSION(1, 0, 0);
    appInfo.apiVersion = VK_API_VERSION_1_0;

    VkInstanceCreateInfo createInfo;
    createInfo.sType = VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO;
    createInfo.pApplicationInfo = &appInfo;
    createInfo.enabledLayerCount = 0;
    createInfo.ppEnabledExtensionNames = NULL;
    VkResult result = vkCreateInstance(&createInfo, NULL, &instance);
}

int main ()
{
    return 0;
}
