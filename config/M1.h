/*
 * @file
 * Defines default strategy parameter values for the given timeframe.
 */

// Defines indicator's parameter values for the given pair symbol and timeframe.
struct Indi_Chaikin_Params_M1 : ChaikinIndiParams {
  Indi_Chaikin_Params_M1() : ChaikinIndiParams(indi_demo_defaults, PERIOD_M1) { shift = 0; }
} indi_demo_m1;

// Defines strategy's parameter values for the given pair symbol and timeframe.
struct Stg_Chaikin_Params_M1 : StgParams {
  // Struct constructor.
  Stg_Chaikin_Params_M1() : StgParams(stg_demo_defaults) {}
} stg_demo_m1;
