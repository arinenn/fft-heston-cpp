/**
 * @file
 * @brief European option class.
 */
#ifndef EUROPEAN_OPTIONS_H
#define EUROPEAN_OPTIONS_H

#include <stdexcept>

/**
 * @brief       A class of Europeaon Option properties
 * 
 * @details     This class is later used for price calculations.
 *              Time to maturity and strike could be changed, but option type couldn't.
 *              If values of T or K are invalid, std::invalid_argument is thrown.
 */
class EuropeanOption
{
private:
    //! Option type. True if Call (otherwise Put)
    bool _is_call;

    //! Time to maturity
    double maturity;

    //! Strike
    double strike;

public:
    /**
     * @brief   A european option constructor.
     * 
     * @param   _is_call    Whether option is of call type
     * @param   m           Time to maturity value
     * @param   s           Strike value
     */
    EuropeanOption(bool _is_call, double m, double s);

    //! Get is_call property.
    bool is_call();

    /**
     * @brief   Set time to maturity.
     * 
     * @param   m           Time to maturity value
     */
    void set_maturity(double m);

    //! Get time to maturity.
    double get_maturity();

    /**
     * @brief   Set strike value.
     * 
     * @param   s           Strike value
     */
    void set_strike(double s);

    //! Get strike value.
    double get_strike();
};

#endif  // EUROPEAN_OPTIONS_H