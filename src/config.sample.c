#include "config.h"

appconfig config = {
	.start_time = "08:00",
	.end_time = "15:00",
	.hr24_time = 1
};

course courses[] = {
	{
		.name = "course 1",
		.start_time = "08:00",
		.end_time = "08:43"
	},
	{
		.name = "course 2",
		.start_time = "08:47",
		.end_time = "09:07"
	},
	{
		.name = "course 3",
		.start_time = "09:11",
		.end_time = "09:54"
	}
};