#pragma once

#include <agency/detail/config.hpp>
#include <agency/detail/type_traits.hpp>
#include <agency/execution/execution_categories.hpp>
#include <agency/execution/execution_policy.hpp>

namespace agency
{
namespace omp
{

using concurrent_agent = detail::basic_concurrent_agent<size_t, default_concurrent_resource, agency::detail::openmp_barrier>;
using concurrent_agent_1d = concurrent_agent;
using concurrent_agent_2d = detail::basic_concurrent_agent<size2, default_concurrent_resource, agency::detail::openmp_barrier>;

} // end omp
} // end agency


