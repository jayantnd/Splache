/**  
 *  ConfigParser.h
 *
 *  Created by Derek Parker and Kyle Nusbaum.
 */

#ifndef _ConfigParser_h
#define _ConfigParser_h
#include <map>
#include <string>
#include <iostream>
#include <fstream>

/**
 * Class to parse through the config file and
 * set a map with key/value information based
 * on what is set in the config file.
 *
 * Definitely not finished, I will flesh out
 * the methods tomorrow, and determine the
 * best way to figure out the relative path
 * to the config file.
 *
 */

class ConfigParser
{
private:
    const char* PATH_TO_CONFIG = ""; // Going to change this based off of a relative path to config file.
    char buf[1024];
    char ch = ' ';
    char key[32];
    char val[32];
    
public:
    ConfigParser();
    ~ConfigParser();
    
    void parseConfigFile(map<std::string, std::string>& configMap);
}
#endif