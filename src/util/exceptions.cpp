#include "exceptions.h"

/*!
 * @author kovlev
 */

std::string SDLInitError::errorMessage = "SDL initialization failed";
SDLInitError::SDLInitError() : std::runtime_error::runtime_error(errorMessage) {}
const char* SDLInitError::what() const throw() {
	return errorMessage.c_str();
}

std::string SDLWindowError::errorMessage = "SDL window creation failed";
SDLWindowError::SDLWindowError() : std::runtime_error::runtime_error(errorMessage) {}
const char* SDLWindowError::what() const throw() {
	return errorMessage.c_str();
}

std::string SDLRendererError::errorMessage = "SDL renderer creation failed";
SDLRendererError::SDLRendererError() : std::runtime_error::runtime_error(errorMessage) {}
const char* SDLRendererError::what() const throw() {
	return errorMessage.c_str();;
}

std::string SDLImageInitError::errorMessage = "SDL image initialization failed";
SDLImageInitError::SDLImageInitError() : std::runtime_error::runtime_error(errorMessage) {}
const char* SDLImageInitError::what() const throw() {
	return errorMessage.c_str();
}

std::string TTFInitError::errorMessage = "TTF initialization failed";
TTFInitError::TTFInitError() : std::runtime_error::runtime_error(errorMessage) {}
const char* TTFInitError::what() const throw() {
	return errorMessage.c_str();
}

std::string SDLMixerInitError::errorMessage = "SDL mixer initialization failed";
SDLMixerInitError::SDLMixerInitError() : std::runtime_error::runtime_error(errorMessage) {}
const char* SDLMixerInitError::what() const throw() {
	return errorMessage.c_str();
}

MediaNotFoundError::MediaNotFoundError(std::string name) :std::runtime_error::runtime_error("Media file is missing: " + name + "") {
	errorMessage = "Media file is missing: " + name + "";
}
const char* MediaNotFoundError::what() const throw() {
	return errorMessage.c_str();
}

std::string TextureConvertError::errorMessage = "Image to texture conversion failed";
TextureConvertError::TextureConvertError() : std::runtime_error::runtime_error(errorMessage) {}
const char* TextureConvertError::what() const throw() {
	return errorMessage.c_str();
}

std::string MapLoadError::errorMessage = "Map loading failed";
MapLoadError::MapLoadError() : std::runtime_error::runtime_error(errorMessage) {}
const char* MapLoadError::what() const throw() {
	return errorMessage.c_str();
}

std::string SettingsLoadError::errorMessage = "Settings loading failed";
SettingsLoadError::SettingsLoadError() : std::runtime_error::runtime_error(errorMessage) {}
const char* SettingsLoadError::what() const throw() {
	return errorMessage.c_str();
}

std::string FilesystemError::errorMessage = "Directory reading failed";
FilesystemError::FilesystemError() : std::runtime_error::runtime_error(errorMessage) {}
const char* FilesystemError::what() const throw() {
	return errorMessage.c_str();
}
