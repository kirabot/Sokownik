/*
 * comm_protocol_threadsafe.h
 *
 *  Created on: Jan 4, 2017
 *      Author: schutzekatze
 */

#ifndef COMM_PROTOCOL_THREADSAFE_H_
#define COMM_PROTOCOL_THREADSAFE_H_

#include "comm_protocol.h"

#include <mutex>
using std::mutex;
using std::unique_lock;

extern mutex threadsafety;

// Protocol wrappers
inline int16_t receive_preamble_ts()
{
	unique_lock<mutex> lock(threadsafety);

	return receive_preamble();
}

inline void request_microphone_data_ts(int16_t* intensity1, int16_t* intensity2, int16_t* intensity3)
{
	unique_lock<mutex> lock(threadsafety);

	request_microphone_data(intensity1, intensity2, intensity3);
}

inline void send_microphone_data_ts(const int16_t intensity1, const int16_t intensity2, const int16_t intensity3)
{
	unique_lock<mutex> lock(threadsafety);

	send_microphone_data(intensity1, intensity2, intensity3);
}

inline void issue_motors_command_ts(const int16_t power1, const int16_t power2)
{
	unique_lock<mutex> lock(threadsafety);

	issue_motors_command(power1, power2);
}

inline void receive_motors_command_ts(int16_t* power1, int16_t* power2)
{
	unique_lock<mutex> lock(threadsafety);

	receive_motors_command(power1, power2);
}

inline void request_distance_ts(int16_t* distance)
{
	unique_lock<mutex> lock(threadsafety);

	request_distance(distance);
}

inline void send_distance_ts(const int16_t distance)
{
	unique_lock<mutex> lock(threadsafety);

	send_distance(distance);
}

#endif /* COMM_PROTOCOL_THREADSAFE_H_ */