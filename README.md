# Vulkan Build2 Package

[![build2](https://github.com/build2-packaging/vulkan-meta/actions/workflows/build2.yml/badge.svg)](https://github.com/build2-packaging/vulkan-meta/actions/workflows/build2.yml)

This project defines a build2 meta package for including [Vulkan](https://www.vulkan.org/) into your build2 project. It only sets the linker and compiler flags as needed by your platform and does not compile any actual code.

The packaging code is licensed under the MIT License.

## Usage

You can simply add this package as dependency to your project by specifying it in your `manifest`:

```
depends: libvulkan-meta ^1.0.0
```

Then just import the `vulkan` target:

```
import opengl_gl_libs = libvulkan-meta%lib{vulkan}
```

If you have multiple Vulkan SDKs installed on your system you can specify the config parameter `config.libvulkan_meta.sdk_root` to point to a specific SDK. For example

```
config.libvulkan_meta.sdk_root=C:/VulkanSDK/1.3.211.0
```

By default this parameter uses the value defined in the environment variable `VULKAN_SDK`.
