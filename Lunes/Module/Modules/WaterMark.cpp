#include "WaterMark.h"

WaterMark::WaterMark() : IModule(0x0, Category::GUI, "Displays client watermark") {
}

WaterMark::~WaterMark() {
}

const char* WaterMark::getModuleName() {
	return ("WaterMark");
}
