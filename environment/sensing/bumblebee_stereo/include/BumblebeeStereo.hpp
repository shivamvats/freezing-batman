/* 
 * File:   BumblebeeStereo.hpp
 * Author: satya
 *
 * Created on December 12, 2013, 9:47 PM
 */

#ifndef BUMBLEBEESTEREO_HPP
#define	BUMBLEBEESTEREO_HPP

#include <Environment/Sensor.hpp>

class BumblebeeStereo : public environment::Sensor {
public:
    bool connect();
    bool disconnect();
    bool fetch();
    BumblebeeStereo();
    BumblebeeStereo(const BumblebeeStereo& orig);
    virtual ~BumblebeeStereo();
};

#endif	/* BUMBLEBEESTEREO_HPP */
