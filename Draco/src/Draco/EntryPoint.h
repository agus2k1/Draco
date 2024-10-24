#pragma once

#ifdef DC_PLATFORM_WINDOWS

extern Draco::Application* Draco::CreateApplication();

int main(int argc, char** argv) {
	printf("Running...");
	auto app = Draco::CreateApplication();
	app->Run();
	delete app;
}

#endif
