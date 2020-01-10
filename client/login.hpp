#pragma once
#include "conn.hpp"
#include <cstdint>
#include <memory>

std::unique_ptr<Conn> login();
