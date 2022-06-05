# Vulkan Build2 Package

[![build2](https://github.com/build2-packaging/vulkan-meta/actions/workflows/build2.yml/badge.svg)](https://github.com/build2-packaging/vulkan-meta/actions/workflows/build2.yml)

This project defines a build2 meta package for including [Vulkan](https://www.vulkan.org/) into your build2 project. It only sets the linker and compiler flags as needed by your platform and does not compile any actual code.

The packaging code is licensed under the MIT License.

## Usage

You can simply add this package as dependency to your project by specifying it in your `manifest`:

```
depends: vulkan-meta
```

Then just import the `vulkan` target:

```
import opengl_gl_libs = vulkan-meta%lib{vulkan}
```


If you have multiple Vulkan SDKs installed on your system you can specify the `config.vulkan_meta.sdk_root` config parameter to point to a specific SDK. For example

```
config.vulkan_meta.sdk_root=C:/VulkanSDK/1.3.211.0
```

By default this parameters uses the value define in the environment variable `VULKAN_SDK`.