#pragma once
#include "Core.h"

namespace Draco {

	class DRACO_API Application {
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	// To be defined in CLIENT
	Application* CreateApplication();

}

