/*
 * test_monitor.h
 *
 * Created: 2/15/2017 4:48:44 PM
 *  Author: acer-hola
 */ 


#ifndef TEST_MONITOR_H_
#define TEST_MONITOR_H_

#include <seekiosCore/seekios.h>
#include <peripheralManager/USART_Manager.h>
#include <seekiosManager/mask_utilities.h>

void task_testMonitor(void*);
void testMonitor_raiseEvent(const char* eventName);


/* Test triggers */
#define TRIGGER_NONE 				"TRIGGER_NONE"
#define TRIGGER_BUTTON_SOS			"TRIGGER_BUTTON_ACTION_SOS"
#define TRIGGER_INSTRUCTION			"TRIGGER_INSTRUCTION"
#define TRIGGER_BUTTON_ACTION_OFF	"TRIGGER_BUTTON_ACTION_OFF"
#define TRIGGER_BUTTON_ACTION_ON	"TRIGGER_BUTTON_ACTION_ON"

/* Test events */

	/* Modes */
	#define EVENT_MODE_TRACKING_STARTED			"EVENT_MODE_TRACKING_STARTED"
	#define EVENT_MODE_ZONE_STARTED				"EVENT_MODE_ZONE_STARTED"
	#define EVENT_MODE_DONT_MODE_STARTED		"EVENT_MODE_DONT_MOVE_STARTED"
	#define EVENT_MODE_WAITING_STARTED			"EVENT_MODE_WAITING_STARTED"
	#define EVENT_MODE_NONE_STARTED				"EVENT_MODE_NONE_STARTED"
	#define EVENT_MODE_ON_DEMAND_STARTED		"EVENT_MODE_ON_DEMAND_STARTED"
	#define EVENT_MODE_SOS_STARTED				"EVENT_MODE_SOS_STARTED"

	/* Tasks */
	#define EVENT_TASK_MODE_STOPPED				"EVENT_TASK_MODE_STOPPED"
	#define EVENT_TASKS_ACTIVES_STOPPED			"EVENT_TASKS_ACTIVES_STOPPED"

	/* Sender */
	#define EVENT_SOS_SENT						"EVENT_MESSAGE_SENT_SOS"
	#define EVENT_SOS_LOCATION_SENT				"EVENT_MESSAGE_SENT_SOSLOC"
	#define EVENT_MESSAGE_SENT_ON_DEMAND		"EVENT_MESSAGE_SENT_ON_DEMAND"
	#define EVENT_MESSAGE_SENT_OUT_OF_ZONE		"EVENT_MESSAGE_SENT_OUT_OF_ZONE"
	#define EVENT_MESSAGE_SENT_TRACKING			"EVENT_MESSAGE_SENT_TRACKING"

	/* Utilities */
	#define EVENT_GPS_STATE_OFF					"EVENT_GPS_STATE_OFF"
	#define EVENT_GPS_EXPIRATION_ALARM_OFF		"EVENT_GPS_EXPIRATION_ALARM_OFF"
	#define	EVENT_SEEKIOS_STATE_OFF				"EVENT_SEEKIOS_STATE_OFF"
	#define	EVENT_SEEKIOS_STATE_ON				"EVENT_SEEKIOS_STATE_ON"			

#endif /* TEST_MONITOR_H_ */