#pragma once

// Which platform we are on?
#if _MSC_VER
#define UNITY_WIN 1
#elif defined(__APPLE__)
	#if defined(__arm__)
		#define UNITY_IPHONE 1
	#else
		#define UNITY_OSX 1
	#endif
#elif defined(__linux__)
#define UNITY_LINUX 1
#elif defined(UNITY_METRO) || defined(UNITY_ANDROID)
// these are defined externally
#else
#error "Unknown platform!"
#endif


// Attribute to make function be exported from a plugin
#if UNITY_METRO
#define EXPORT_API __declspec(dllexport) __stdcall
#elif UNITY_WIN
#define EXPORT_API __declspec(dllexport)
#else
#define EXPORT_API
#endif


// Which graphics device APIs we possibly support?
#if UNITY_METRO
#define SUPPORT_D3D11 1
#elif UNITY_WIN
#define SUPPORT_D3D9 1
#define SUPPORT_D3D11 1 // comment this out if you don't have D3D11 header/library files
#define SUPPORT_OPENGL 1
#endif

#if UNITY_OSX || UNITY_LINUX
#define SUPPORT_OPENGL 1
#endif

#if UNITY_IPHONE || UNITY_ANDROID
	#define SUPPORT_OPENGLES 1
#endif


// Graphics device identifiers in Unity
enum GfxDeviceRenderer
{
	kGfxRendererOpenGL = 0,			// OpenGL
	kGfxRendererD3D9,				// Direct3D 9
	kGfxRendererD3D11,				// Direct3D 11
	kGfxRendererGCM,				// Sony PlayStation 3 GCM
	kGfxRendererNull,				// "null" device (used in batch mode)
	kGfxRendererHollywood,			// Nintendo Wii
	kGfxRendererXenon,				// Xbox 360
	kGfxRendererOpenGLES_Obsolete,
	kGfxRendererOpenGLES20Mobile,	// OpenGL ES 2.0
	kGfxRendererMolehill_Obsolete,
	kGfxRendererOpenGLES20Desktop_Obsolete,
	kGfxRendererOpenGLES30,			// OpenGL ES 3.0
	kGfxRendererCount
};


// Event types for UnitySetGraphicsDevice
enum GfxDeviceEventType {
	kGfxDeviceEventInitialize = 0,
	kGfxDeviceEventShutdown,
	kGfxDeviceEventBeforeReset,
	kGfxDeviceEventAfterReset,
};


