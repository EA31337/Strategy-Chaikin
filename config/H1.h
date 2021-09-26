/*
 * @file
 * Defines default strategy parameter values for the given timeframe.
 */

// Defines indicator's parameter values for the given pair symbol and timeframe.
struct Indi_Chaikin_Params_H1 : ChaikinIndiParams {
  Indi_Chaikin_Params_H1() : ChaikinIndiParams(indi_cho_defaults, PERIOD_H1) { shift = 0; }
} indi_cho_h1;

// Defines strategy's parameter values for the given pair symbol and timeframe.
struct Stg_Chaikin_Params_H1 : StgParams {
  // Struct constructor.
  Stg_Chaikin_Params_H1() : StgParams(stg_cho_defaults) {}
} stg_cho_h1;
