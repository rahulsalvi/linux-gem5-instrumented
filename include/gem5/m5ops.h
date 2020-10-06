/*
 * Copyright (c) 2003-2006 The Regents of The University of Michigan
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are
 * met: redistributions of source code must retain the above copyright
 * notice, this list of conditions and the following disclaimer;
 * redistributions in binary form must reproduce the above copyright
 * notice, this list of conditions and the following disclaimer in the
 * documentation and/or other materials provided with the distribution;
 * neither the name of the copyright holders nor the names of its
 * contributors may be used to endorse or promote products derived from
 * this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
 * A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
 * OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
 * SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
 * LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
 * DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
 * THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

#ifndef __GEM5_M5OP_H__
#define __GEM5_M5OP_H__

#ifdef __cplusplus
extern "C" {
#endif

#include <linux/types.h>

void m5_arm(u64 address);
void m5_quiesce(void);
void m5_quiesce_ns(u64 ns);
void m5_quiesce_cycle(u64 cycles);
u64  m5_quiesce_time(void);
u64  m5_rpns(void);
void m5_wake_cpu(u64 cpuid);

void m5_exit(u64 ns_delay);
void m5_fail(u64 ns_delay, u64 code);
u64  m5_init_param(u64 key_str1, u64 key_str2);
void m5_checkpoint(u64 ns_delay, u64 ns_period);
void m5_reset_stats(u64 ns_delay, u64 ns_period);
void m5_dump_stats(u64 ns_delay, u64 ns_period);
void m5_dump_reset_stats(u64 ns_delay, u64 ns_period);
u64  m5_read_file(void* buffer, u64 len, u64 offset);
u64  m5_write_file(void* buffer, u64 len, u64 offset, const char* filename);
void m5_debug_break(void);
void m5_switch_cpu(void);
void m5_dist_toggle_sync(void);
void m5_add_symbol(u64 addr, const char* symbol);
void m5_load_symbol(void);
void m5_panic(void);
void m5_work_begin(u64 workid, u64 threadid);
void m5_work_end(u64 workid, u64 threadid);

void m5_se_syscall(void);
void m5_se_page_fault(void);

#ifdef __cplusplus
}
#endif
#endif // __GEM5_M5OP_H__
