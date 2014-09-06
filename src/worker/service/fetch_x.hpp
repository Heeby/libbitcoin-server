#ifndef OBELISK_WORKER_SERVICE_FETCH_X_HPP
#define OBELISK_WORKER_SERVICE_FETCH_X_HPP

#include <obelisk/define.hpp>
#include <obelisk/message.hpp>
#include "../node_impl.hpp"
#include "util.hpp"

namespace obelisk {

// fetch_history stuff

BCS_API bool unwrap_fetch_history_args(
    bc::payment_address& payaddr, uint32_t& from_height,
    const incoming_message& request);

BCS_API void send_history_result(const std::error_code& ec,
    const bc::blockchain::history_list& history,
    const incoming_message& request, queue_send_callback queue_send);

// fetch_transaction stuff

BCS_API bool unwrap_fetch_transaction_args(
    bc::hash_digest& tx_hash, const incoming_message& request);

BCS_API void transaction_fetched(const std::error_code& ec,
    const bc::transaction_type& tx,
    const incoming_message& request, queue_send_callback queue_send);

} // namespace obelisk

#endif

