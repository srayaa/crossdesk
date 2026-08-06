#include "render.h"

#include <memory>

#include "application/gui_application.h"

namespace crossdesk {

Render::Render(bool background_agent)
    : application_(std::make_unique<GuiApplication>(background_agent)) {}

Render::~Render() = default;

int Render::Run() { return application_->Run(); }

void Render::RequestQuit() { application_->RequestQuit(); }

} // namespace crossdesk
