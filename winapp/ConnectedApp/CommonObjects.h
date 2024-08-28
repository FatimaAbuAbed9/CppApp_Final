#pragma once
#include <atomic>      // Provides atomic operations for thread-safe access to boolean flags
#include <vector>      // Provides dynamic arrays for storing job lists
#include <string>      // Provides support for string manipulation
#include <mutex>       // Provides mutual exclusion (mutex) to ensure thread-safe access to shared resources
#include "JobInfo.h"   // Includes the definition of the JobInfo struct, representing job details

struct CommonObjects {
    std::atomic_bool exit_flag = false;
    std::atomic_bool start_download = false;
    std::atomic_bool data_ready = false;
    std::string url;
    std::string search_query;
    std::vector<JobInfo> jobList;
    std::mutex mutex;

    bool images_shown = false; // Flag to track if the images have been shown
};