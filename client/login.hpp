#pragma once
#include <cstdint>
#include <encnet/enc_socket.hpp>
#include <memory>

std::unique_ptr<EncSocket> login();
