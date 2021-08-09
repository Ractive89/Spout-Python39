#define BOOST_PYTHON_STATIC_LIB
#define BOOST_BIND_NO_PLACEHOLDERS
#include "SpoutSender.h"
#include "SpoutReceiver.h"
#include <boost/python.hpp>

BOOST_PYTHON_MODULE(SpoutSDK)
{
	using namespace boost::python;

	class_<SpoutSender>("SpoutSender")
		.def("CreateSender", &SpoutSender::CreateSender)
		.def("TestWorks", &SpoutSender::TestWorks)
		.def("SendTexture", &SpoutSender::SendTexture)
		.def("ReleaseSender", &SpoutSender::ReleaseSender)
		.def("GetFps", &SpoutSender::GetFps)
		.def("GetGLDX", &SpoutSender::GetGLDX)
		.def("GetCPU", &SpoutSender::GetCPU)
		.def("GetFrame", &SpoutSender::GetFrame)
		.def("GetWidth", &SpoutSender::GetWidth)
		.def("GetHeight", &SpoutSender::GetHeight)
		;
	class_<SpoutReceiver>("SpoutReceiver")
		.def("pyCreateReceiver", &SpoutReceiver::pyCreateReceiver)
		.def("pyReceiveTexture", &SpoutReceiver::pyReceiveTexture)
		.def("ReleaseReceiver", &SpoutReceiver::ReleaseReceiver)
		.def("SelectSenderPanel", &SpoutReceiver::SelectSenderPanel)
		.def("GetWidth", &SpoutReceiver::GetWidth)
		.def("GetHeight", &SpoutReceiver::GetHeight)
		.def("GetSpoutVersion",&SpoutReceiver::GetSpoutVersion)
		.def("GetFrame", & SpoutReceiver::GetSenderFrame)
		.def("GetFps", & SpoutReceiver::GetSenderFps)
		.def("GetSenderCPU", &SpoutReceiver::GetSenderCPU)
		.def("GetSenderGLDX", &SpoutReceiver::GetSenderGLDX)
		.def("IsFrameNew", &SpoutReceiver::IsFrameNew)
		.def("IsUpdated", & SpoutReceiver::IsUpdated)
		.def("IsConnected", &SpoutReceiver::IsConnected)
		;
}

