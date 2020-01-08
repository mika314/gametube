#pragma once
#include <cstdint>
#include <optional>

using LoginToken = uint64_t;
std::optional<LoginToken> login();
