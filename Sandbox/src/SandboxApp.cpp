#include <Draco.h>

class Sandbox : public Draco::Application {
	public:
		Sandbox() {};
		~Sandbox() {};
};

Draco::Application* Draco::CreateApplication() {
	return new Sandbox();
}