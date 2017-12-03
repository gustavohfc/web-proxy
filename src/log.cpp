/*!
 * \file log.cpp
 * \author Gustavo Henrique Fernandes Carvalho
 */

#include <iostream>
#include <fstream>

static std::ofstream log_file;


bool startLog()
{
    log_file.open("Log_proxy.txt", std::ios::out | std::ios::app | std::ios::binary);

    if (log_file.is_open())
        return true;
    else
        return false;
}


void closeLog()
{
    log_file.close();
}


// void log(std::string message)
// {
//     char timestamp[80];
//     time_t rawtime;
//     struct tm * timeinfo;

//     time (&rawtime);
//     timeinfo = localtime (&rawtime);

//     strftime (timestamp, sizeof(timestamp), "[%X %x]",timeinfo);

//     message.insert(0, " Process " + std::to_string(process_number) + ": ");
//     message.insert(0, timestamp);
//     message.append("\n");
//     send_buffer(logger_socket, (unsigned char *) message.c_str(), message.size());
// }