#ifndef QZSETTINGS_H
#define QZSETTINGS_H

#include <QString>

class QZSettings {
  private:
    QZSettings() {}

  public:
    //--------------------------------------------------------------------------------------------
    // These are not in settings.qml
    //--------------------------------------------------------------------------------------------

    static const QString cryptoKeySettingsProfiles;
    static constexpr int default_cryptoKeySettingsProfiles = 0;
    /**
     *@brief Disable (true) reconnection when the device disconnects from Bluetooth.
     */
    static const QString bluetooth_no_reconnection;
    static constexpr bool default_bluetooth_no_reconnection = false;

    /**
     *@brief Choose between wheel revolutions (true) and wheel and crank revolutions (false)
     *when configuring the CSC feature BLE characteristic.
     */
    static const QString bike_wheel_revs;
    static constexpr bool default_bike_wheel_revs = false;

    static const QString bluetooth_lastdevice_name;
    static const QString default_bluetooth_lastdevice_name;

    static const QString bluetooth_lastdevice_address;
    static const QString default_bluetooth_lastdevice_address;

    static const QString hrm_lastdevice_name;
    static const QString default_hrm_lastdevice_name;

    static const QString hrm_lastdevice_address;
    static const QString default_hrm_lastdevice_address;

    static const QString ftms_accessory_address;
    static const QString default_ftms_accessory_address;

    static const QString ftms_accessory_lastdevice_name;
    static const QString default_ftms_accessory_lastdevice_name;

    static const QString csc_sensor_address;
    static const QString default_csc_sensor_address;

    static const QString csc_sensor_lastdevice_name;
    static const QString default_csc_sensor_lastdevice_name;

    static const QString power_sensor_lastdevice_name;
    static const QString default_power_sensor_lastdevice_name;

    static const QString power_sensor_address;
    static const QString default_power_sensor_address;

    static const QString elite_rizer_lastdevice_name;
    static const QString default_elite_rizer_lastdevice_name;

    static const QString elite_rizer_address;
    static const QString default_elite_rizer_address;

    static const QString elite_sterzo_smart_lastdevice_name;
    static const QString default_elite_sterzo_smart_lastdevice_name;

    static const QString elite_sterzo_smart_address;
    static const QString default_elite_sterzo_smart_address;

    static const QString strava_accesstoken;
    static const QString default_strava_accesstoken;

    static const QString strava_refreshtoken;
    static const QString default_strava_refreshtoken;

    static const QString strava_lastrefresh;
    static const QString default_strava_lastrefresh;

    static const QString strava_expires;
    static const QString default_strava_expires;

    static const QString code;
    static const QString default_code;

    //--------------------------------------------------------------------------------------------

    /**
     *@brief Zoom percentage for the user interface.
     */
    static const QString ui_zoom;
    static constexpr float default_ui_zoom = 100.0;

    /**
     *@brief Disable (true) or use (false) the device's heart rate service.
     */
    static const QString bike_heartrate_service;
    static constexpr bool default_bike_heartrate_service = false;

    /**
     *@brief An offset that can be applied to the resistance from the device.
     * calculated_resistance = raw_resistance * bike_resistance_gain_f + bike_resistance_offset
     */
    static const QString bike_resistance_offset;
    static constexpr int default_bike_resistance_offset = 4;

    /**
     *@brief A gain that can be applied to the resistance from the device.
     * calculated_resistance = raw_resistance * bike_resistance_gain_f + bike_resistance_offset
     */
    static const QString bike_resistance_gain_f;
    static constexpr float default_bike_resistance_gain_f = 1.0;

    /**
     *@brief Used to specify of QZ is using Zwift in ERG (workout) Mode.
     * When supporting this, QZ should communicate the target resistance
     * (or automatically adjust the device's resistance if it has this capability) to match the target
     * watts based on the cadence (RPM). In ERG Mode, the changes in inclination should not affect target resistance,
     * as is the case in Simulation Mode. Default is false.
     *
     */
    static const QString zwift_erg;
    static constexpr bool default_zwift_erg = false;

    /**
     *@brief In ERG Mode, Zwift sends a “target output” request. If the output requested doesn’t match the current
     *output (calculated using cadence and resistance level), the target resistance should change to help the user get
     *closer to the target output. If the filter is set to higher values, there should be less adjustment of the target
     *resistance and cadence would need to be increased to match the target output. The zwift_erg_filter and
     *zwift_erg_filter_down settings are the upper and lower margin before the adjustment of resistance is communicated.
     *Example: if the zwift_erg_filter and zwift_erg_filter_down filters are set to 10 and the target output is 100
     *watts, a change of resistance will only be communicated if the device produces less than 90 Watts or more than 110
     *Watts.
     */
    static const QString zwift_erg_filter;
    static constexpr float default_zwift_erg_filter = 10.0;

    /**
     *@brief In ERG Mode, Zwift sends a “target output” request. If the output requested doesn’t match the current
     *output (calculated using cadence and resistance level), the target resistance should change to help the user get
     *closer to the target output. If the filter is set to higher values, there should be less adjustment of the target
     *resistance and cadence would need to be increased to match the target output. The zwift_erg_filter and
     *zwift_erg_filter_down settings are the upper and lower margin before the adjustment of resistance is communicated.
     *Example: if the zwift_erg_filter and zwift_erg_filter_down filters are set to 10 and the target output is 100
     *watts, a change of resistance will only be communicated if the device produces less than 90 Watts or more than 110
     *Watts.
     */
    static const QString zwift_erg_filter_down;
    static constexpr float default_zwift_erg_filter_down = 10.0;

    /**
     *@brief Used to invoke a workaround whereby negative inclination is multiplied by 2.
     */
    static const QString zwift_negative_inclination_x2;
    static constexpr bool default_zwift_negative_inclination_x2 = false;

    /**
     *@brief An offset that will be applied to the inclination received from the client application.
     * calculated_inclination = raw_inclination * zwift_inclination_gain + zwift_inclination_offset
     */
    static const QString zwift_inclination_offset;
    static constexpr float default_zwift_inclination_offset = 0;

    /**
     *@brief A gain that will be applied to the inclination received from the client application.
     * calculated_inclination = raw_inclination * zwift_inclination_gain + zwift_inclination_offset
     */
    static const QString zwift_inclination_gain;
    static constexpr float default_zwift_inclination_gain = 1.0;

    static const QString echelon_resistance_offset;
    static constexpr float default_echelon_resistance_offset = 0;

    static const QString echelon_resistance_gain;
    static constexpr float default_echelon_resistance_gain = 1.0;

    /**
     *@brief Used for some devices to specify that speed should be calculated from power.
     */
    static const QString speed_power_based;
    static constexpr bool default_speed_power_based = false;

    /**
     *@brief The resistance to be set when a bike or elliptical trainer first connects.
     */
    static const QString bike_resistance_start;
    static constexpr int default_bike_resistance_start = 1;

    /**
     *@brief The age of the user in years.
     */
    static const QString age;
    static constexpr int default_age = 35.0;

    /**
     *@brief The mass of the user in kilograms. Used for power calculations.
     */
    static const QString weight;
    static constexpr float default_weight = 75.0;

    /**
     *@brief The user's Functional Threshold Power in watts per kilogram. This is a measure of the best average power
     *output the user could sustain for 1 hour in a time-trial scenario.
     */
    static const QString ftp;
    static constexpr float default_ftp = 200.0;

    /**
     *@brief Email address of the user.
     */
    static const QString user_email;

    /**
     * @brief Default email address of user. Empty Latin1 string.
     * This is a Latin1 string because of where it could be used.
     */
    static const QString default_user_email;

    static const QString user_nickname;
    static const QString default_user_nickname;

    /**
     *@brief Specifies whether or not to use miles (false) or kilometers (true) as the unit of distance.
     */
    static const QString miles_unit;
    static constexpr bool default_miles_unit = false;

    static const QString pause_on_start;
    static constexpr bool default_pause_on_start = false;

    /**
     *@brief value for peloton trainrow.forcespeed.
     */
    static const QString treadmill_force_speed;
    static constexpr bool default_treadmill_force_speed = false;

    static const QString pause_on_start_treadmill;
    static constexpr bool default_pause_on_start_treadmill = false;

    /**
     *@brief Flag to indicate if it should be ignored (true) that the user has stopped doing work.
     */
    static const QString continuous_moving;
    static constexpr bool default_continuous_moving = false;

    static const QString bike_cadence_sensor;
    static constexpr bool default_bike_cadence_sensor = false;

    static const QString run_cadence_sensor;
    static constexpr bool default_run_cadence_sensor = false;

    static const QString bike_power_sensor;
    static constexpr bool default_bike_power_sensor = false;

    static const QString heart_rate_belt_name;
    static const QString default_heart_rate_belt_name;

    /**
     *@brief Used to ignore the heart rate from some devices.
     */
    static const QString heart_ignore_builtin;
    static constexpr bool default_heart_ignore_builtin = false;

    /**
     * @brief Used to ignore an energy reading from some devices.
     */
    static const QString kcal_ignore_builtin;
    static constexpr bool default_kcal_ignore_builtin = false;

    static const QString ant_cadence;
    static constexpr bool default_ant_cadence = false;

    static const QString ant_heart;
    static constexpr bool default_ant_heart = false;

    static const QString ant_garmin;
    static constexpr bool default_ant_garmin = false;

    static const QString top_bar_enabled;
    static constexpr bool default_top_bar_enabled = true;
    /**
     *@brief The username for logging in to Peloton.
     */
    static const QString peloton_username;
    static const QString default_peloton_username;

    /**
     *@brief The password for logging in to Peloton.
     */
    static const QString peloton_password;
    static const QString default_peloton_password;

    static const QString peloton_difficulty;
    static const QString default_peloton_difficulty;

    static const QString peloton_cadence_metric;
    static const QString default_peloton_cadence_metric;

    static const QString peloton_heartrate_metric;
    static const QString default_peloton_heartrate_metric;

    static const QString peloton_date;
    static const QString default_peloton_date;

    static const QString peloton_description_link;
    static constexpr bool default_peloton_description_link = true;

    static const QString pzp_username;
    static const QString default_pzp_username;

    static const QString pzp_password;
    static const QString default_pzp_password;

    static const QString tile_speed_enabled;
    static constexpr bool default_tile_speed_enabled = true;

    static const QString tile_speed_order;
    static constexpr int default_tile_speed_order = 0;

    static const QString tile_inclination_enabled;
    static constexpr bool default_tile_inclination_enabled = true;

    static const QString tile_inclination_order;
    static constexpr int default_tile_inclination_order = 1;

    static const QString tile_cadence_enabled;
    static constexpr bool default_tile_cadence_enabled = true;

    static const QString tile_cadence_order;
    static constexpr int default_tile_cadence_order = 2;

    static const QString tile_elevation_enabled;
    static constexpr bool default_tile_elevation_enabled = true;

    static const QString tile_elevation_order;
    static constexpr int default_tile_elevation_order = 3;

    static const QString tile_calories_enabled;
    static constexpr bool default_tile_calories_enabled = true;

    static const QString tile_calories_order;
    static constexpr int default_tile_calories_order = 4;

    static const QString tile_odometer_enabled;
    static constexpr bool default_tile_odometer_enabled = true;

    static const QString tile_odometer_order;
    static constexpr int default_tile_odometer_order = 5;

    static const QString tile_pace_enabled;
    static constexpr bool default_tile_pace_enabled = true;

    static const QString tile_pace_order;
    static constexpr int default_tile_pace_order = 6;

    static const QString tile_resistance_enabled;
    static constexpr bool default_tile_resistance_enabled = true;

    static const QString tile_resistance_order;
    static constexpr int default_tile_resistance_order = 7;

    static const QString tile_watt_enabled;
    static constexpr bool default_tile_watt_enabled = true;

    static const QString tile_watt_order;
    static constexpr int default_tile_watt_order = 8;

    static const QString tile_weight_loss_enabled;
    static constexpr bool default_tile_weight_loss_enabled = false;

    static const QString tile_weight_loss_order;
    static constexpr int default_tile_weight_loss_order = 24;

    static const QString tile_avgwatt_enabled;
    static constexpr bool default_tile_avgwatt_enabled = true;

    static const QString tile_avgwatt_order;
    static constexpr int default_tile_avgwatt_order = 9;

    static const QString tile_ftp_enabled;
    static constexpr bool default_tile_ftp_enabled = true;

    static const QString tile_ftp_order;
    static constexpr int default_tile_ftp_order = 10;

    static const QString tile_heart_enabled;
    static constexpr bool default_tile_heart_enabled = true;

    static const QString tile_heart_order;
    static constexpr int default_tile_heart_order = 11;

    static const QString tile_fan_enabled;
    static constexpr bool default_tile_fan_enabled = true;

    static const QString tile_fan_order;
    static constexpr int default_tile_fan_order = 12;

    static const QString tile_jouls_enabled;
    static constexpr bool default_tile_jouls_enabled = true;

    static const QString tile_jouls_order;
    static constexpr int default_tile_jouls_order = 13;

    static const QString tile_elapsed_enabled;
    static constexpr bool default_tile_elapsed_enabled = true;

    static const QString tile_elapsed_order;
    static constexpr int default_tile_elapsed_order = 14;

    static const QString tile_lapelapsed_enabled;
    static constexpr bool default_tile_lapelapsed_enabled = false;

    static const QString tile_lapelapsed_order;
    static constexpr int default_tile_lapelapsed_order = 17;

    static const QString tile_moving_time_enabled;
    static constexpr bool default_tile_moving_time_enabled = false;

    static const QString tile_moving_time_order;
    static constexpr int default_tile_moving_time_order = 21;

    static const QString tile_peloton_offset_enabled;
    static constexpr bool default_tile_peloton_offset_enabled = false;

    static const QString tile_peloton_offset_order;
    static constexpr int default_tile_peloton_offset_order = 22;

    static const QString tile_peloton_difficulty_enabled;
    static constexpr bool default_tile_peloton_difficulty_enabled = false;

    static const QString tile_peloton_difficulty_order;
    static constexpr int default_tile_peloton_difficulty_order = 32;

    static const QString tile_peloton_resistance_enabled;
    static constexpr bool default_tile_peloton_resistance_enabled = true;

    static const QString tile_peloton_resistance_order;
    static constexpr int default_tile_peloton_resistance_order = 15;

    static const QString tile_datetime_enabled;
    static constexpr bool default_tile_datetime_enabled = true;

    static const QString tile_datetime_order;
    static constexpr int default_tile_datetime_order = 16;

    static const QString tile_target_resistance_enabled;
    static constexpr bool default_tile_target_resistance_enabled = true;

    static const QString tile_target_resistance_order;
    static constexpr int default_tile_target_resistance_order = 15;

    static const QString tile_target_peloton_resistance_enabled;
    static constexpr bool default_tile_target_peloton_resistance_enabled = false;

    static const QString tile_target_peloton_resistance_order;
    static constexpr int default_tile_target_peloton_resistance_order = 21;

    static const QString tile_target_cadence_enabled;
    static constexpr bool default_tile_target_cadence_enabled = false;

    static const QString tile_target_cadence_order;
    static constexpr int default_tile_target_cadence_order = 19;

    static const QString tile_target_power_enabled;
    static constexpr bool default_tile_target_power_enabled = false;

    static const QString tile_target_power_order;
    static constexpr int default_tile_target_power_order = 20;

    static const QString tile_target_zone_enabled;
    static constexpr bool default_tile_target_zone_enabled = false;

    static const QString tile_target_zone_order;
    static constexpr int default_tile_target_zone_order = 24;

    static const QString tile_target_speed_enabled;
    static constexpr bool default_tile_target_speed_enabled = false;

    static const QString tile_target_speed_order;
    static constexpr int default_tile_target_speed_order = 27;

    static const QString tile_target_incline_enabled;
    static constexpr bool default_tile_target_incline_enabled = false;

    static const QString tile_target_incline_order;
    static constexpr int default_tile_target_incline_order = 28;

    static const QString tile_strokes_count_enabled;
    static constexpr bool default_tile_strokes_count_enabled = false;

    static const QString tile_strokes_count_order;
    static constexpr int default_tile_strokes_count_order = 22;

    static const QString tile_strokes_length_enabled;
    static constexpr bool default_tile_strokes_length_enabled = false;

    static const QString tile_strokes_length_order;
    static constexpr int default_tile_strokes_length_order = 23;

    static const QString tile_watt_kg_enabled;
    static constexpr bool default_tile_watt_kg_enabled = false;

    static const QString tile_watt_kg_order;
    static constexpr int default_tile_watt_kg_order = 25;

    static const QString tile_gears_enabled;
    static constexpr bool default_tile_gears_enabled = false;

    static const QString tile_gears_order;
    static constexpr int default_tile_gears_order = 26;

    static const QString tile_remainingtimetrainprogramrow_enabled;
    static constexpr bool default_tile_remainingtimetrainprogramrow_enabled = false;

    static const QString tile_remainingtimetrainprogramrow_order;
    static constexpr int default_tile_remainingtimetrainprogramrow_order = 27;

    static const QString tile_nextrowstrainprogram_enabled;
    static constexpr bool default_tile_nextrowstrainprogram_enabled = false;

    static const QString tile_nextrowstrainprogram_order;
    static constexpr int default_tile_nextrowstrainprogram_order = 31;

    static const QString tile_mets_enabled;
    static constexpr bool default_tile_mets_enabled = false;

    static const QString tile_mets_order;
    static constexpr int default_tile_mets_order = 28;

    static const QString tile_targetmets_enabled;
    static constexpr bool default_tile_targetmets_enabled = false;

    static const QString tile_targetmets_order;
    static constexpr int default_tile_targetmets_order = 29;

    static const QString tile_steering_angle_enabled;
    static constexpr bool default_tile_steering_angle_enabled = false;

    static const QString tile_steering_angle_order;
    static constexpr int default_tile_steering_angle_order = 30;

    static const QString tile_pid_hr_enabled;
    static constexpr bool default_tile_pid_hr_enabled = false;

    static const QString tile_pid_hr_order;
    static constexpr int default_tile_pid_hr_order = 31;

    static const QString heart_rate_zone1;
    static constexpr float default_heart_rate_zone1 = 70.0;

    static const QString heart_rate_zone2;
    static constexpr float default_heart_rate_zone2 = 80.0;

    static const QString heart_rate_zone3;
    static constexpr float default_heart_rate_zone3 = 90.0;

    static const QString heart_rate_zone4;
    static constexpr float default_heart_rate_zone4 = 100.0;

    static const QString heart_max_override_enable;
    static constexpr bool default_heart_max_override_enable = false;

    static const QString heart_max_override_value;
    static constexpr float default_heart_max_override_value = 195.0;

    static const QString peloton_gain;
    static constexpr float default_peloton_gain = 1.0;

    static const QString peloton_offset;
    static constexpr float default_peloton_offset = 0;

    static const QString treadmill_pid_heart_zone;
    static const QString default_treadmill_pid_heart_zone;
    /**
     *@brief 1 mile time goal, for a training program with the speed control.
     */
    static const QString pacef_1mile;
    static constexpr float default_pacef_1mile = 250;
    /**
     *@brief 5 km time goal, for a training program with the speed control.
     */
    static const QString pacef_5km;
    static constexpr float default_pacef_5km = 300;
    /**
     *@brief 10 km time goal, for a training program with the speed control.
     */
    static const QString pacef_10km;
    static constexpr float default_pacef_10km = 320;
    /**
     *@brief  pacef_1mile, but for half-marathon distance, for a training program with the speed control.
     */
    static const QString pacef_halfmarathon;
    static constexpr float default_pacef_halfmarathon = 340;
    /**
     *@brief  pacef_1mile, but for marathon distance, for a training program with the speed control.
     */
    static const QString pacef_marathon;
    static constexpr float default_pacef_marathon = 360;

    /**
     *@brief default pace to be used when the ZWO file does not indicate a precise pace.
     *Text values, i.e. "1 mile", "5 km", "10 km", "Half Marathon"
     */
    static const QString pace_default;
    static const QString default_pace_default;

    static const QString domyos_treadmill_buttons;
    static constexpr bool default_domyos_treadmill_buttons = false;

    static const QString domyos_treadmill_distance_display;
    static constexpr bool default_domyos_treadmill_distance_display = true;

    static const QString domyos_treadmill_display_invert;
    static constexpr bool default_domyos_treadmill_display_invert = false;

    static const QString domyos_bike_cadence_filter;
    static constexpr float default_domyos_bike_cadence_filter = 0.0;

    static const QString domyos_bike_display_calories;
    static constexpr bool default_domyos_bike_display_calories = true;

    static const QString domyos_elliptical_speed_ratio;
    static constexpr float default_domyos_elliptical_speed_ratio = 1.0;

    static const QString eslinker_cadenza;
    static constexpr bool default_eslinker_cadenza = true;
    static const QString eslinker_ypoo;
    static constexpr bool default_eslinker_ypoo = false;
    /**
     *@brief Choose between the standard and MGARCEA watt table.
     */
    static const QString echelon_watttable;
    static const QString default_echelon_watttable;

    static const QString proform_wheel_ratio;
    static constexpr float default_proform_wheel_ratio = 0.33;

    static const QString proform_tour_de_france_clc;
    static constexpr bool default_proform_tour_de_france_clc = false;

    static const QString proform_tdf_jonseed_watt;
    static constexpr bool default_proform_tdf_jonseed_watt = false;

    static const QString proform_studio;
    static constexpr bool default_proform_studio = false;

    static const QString proform_tdf_10;
    static constexpr bool default_proform_tdf_10 = false;

    static const QString horizon_gr7_cadence_multiplier;
    static constexpr double default_horizon_gr7_cadence_multiplier = 1.0;

    static const QString fitshow_user_id;
    static constexpr int default_fitshow_user_id = 0x13AA;

    static const QString inspire_peloton_formula;
    static constexpr bool default_inspire_peloton_formula = false;

    static const QString inspire_peloton_formula2;
    static constexpr bool default_inspire_peloton_formula2 = false;

    static const QString hammer_racer_s;
    static constexpr bool default_hammer_racer_s = false;

    static const QString pafers_treadmill;
    static constexpr bool default_pafers_treadmill = false;

    static const QString yesoul_peloton_formula;
    static constexpr bool default_yesoul_peloton_formula = false;

    static const QString nordictrack_10_treadmill;
    static constexpr bool default_nordictrack_10_treadmill = true;

    static const QString nordictrack_t65s_treadmill;
    static constexpr bool default_nordictrack_t65s_treadmill = false;

    // static const QString proform_treadmill_995i;
    // static constexpr bool default_proform_treadmill_995i = false;

    static const QString toorx_3_0;
    static constexpr bool default_toorx_3_0 = false;

    static const QString toorx_65s_evo;
    static constexpr bool default_toorx_65s_evo = false;

    static const QString jtx_fitness_sprint_treadmill;
    static constexpr bool default_jtx_fitness_sprint_treadmill = false;

    static const QString dkn_endurun_treadmill;
    static constexpr bool default_dkn_endurun_treadmill = false;

    static const QString trx_route_key;
    static constexpr bool default_trx_route_key = false;

    static const QString bh_spada_2;
    static constexpr bool default_bh_spada_2 = false;

    static const QString toorx_bike;
    static constexpr bool default_toorx_bike = false;

    static const QString toorx_ftms;
    static constexpr bool default_toorx_ftms = false;

    static const QString jll_IC400_bike;
    static constexpr bool default_jll_IC400_bike = false;

    static const QString fytter_ri08_bike;
    static constexpr bool default_fytter_ri08_bike = false;

    static const QString asviva_bike;
    static constexpr bool default_asviva_bike = false;

    static const QString hertz_xr_770;
    static constexpr bool default_hertz_xr_770 = false;

    static const QString m3i_bike_id;
    static constexpr int default_m3i_bike_id = 256;

    static const QString m3i_bike_speed_buffsize;
    static constexpr int default_m3i_bike_speed_buffsize = 90;

    static const QString m3i_bike_qt_search;
    static constexpr bool default_m3i_bike_qt_search = false;

    static const QString m3i_bike_kcal;
    static constexpr bool default_m3i_bike_kcal = true;

    static const QString snode_bike;
    static constexpr bool default_snode_bike = false;

    static const QString fitplus_bike;
    static constexpr bool default_fitplus_bike = false;

    static const QString virtufit_etappe;
    static constexpr bool default_virtufit_etappe = false;

    static const QString flywheel_filter;
    static constexpr int default_flywheel_filter = 2;

    static const QString flywheel_life_fitness_ic8;
    static constexpr bool default_flywheel_life_fitness_ic8 = false;

    static const QString sole_treadmill_inclination;
    static constexpr bool default_sole_treadmill_inclination = false;

    static const QString sole_treadmill_miles;
    static constexpr bool default_sole_treadmill_miles = true;

    static const QString sole_treadmill_f65;
    static constexpr bool default_sole_treadmill_f65 = false;

    static const QString sole_treadmill_f63;
    static constexpr bool default_sole_treadmill_f63 = false;

    static const QString sole_treadmill_tt8;
    static constexpr bool default_sole_treadmill_tt8 = false;

    static const QString schwinn_bike_resistance;
    static constexpr bool default_schwinn_bike_resistance = false;

    static const QString schwinn_bike_resistance_v2;
    static constexpr bool default_schwinn_bike_resistance_v2 = false;

    static const QString technogym_myrun_treadmill_experimental;
    static constexpr bool default_technogym_myrun_treadmill_experimental = false;

    static const QString trainprogram_random;
    static constexpr bool default_trainprogram_random = false;

    static const QString trainprogram_total;
    static constexpr int default_trainprogram_total = 60;

    static const QString trainprogram_period_seconds;
    static constexpr float default_trainprogram_period_seconds = 60;

    static const QString trainprogram_speed_min;
    static constexpr float default_trainprogram_speed_min = 8;

    static const QString trainprogram_speed_max;
    static constexpr float default_trainprogram_speed_max = 16;

    static const QString trainprogram_incline_min;
    static constexpr float default_trainprogram_incline_min = 0;

    static const QString trainprogram_incline_max;
    static constexpr float default_trainprogram_incline_max = 15;

    static const QString trainprogram_resistance_min;
    static constexpr float default_trainprogram_resistance_min = 1;

    static const QString trainprogram_resistance_max;
    static constexpr float default_trainprogram_resistance_max = 32;

    /**
     * @brief Adjusts value in a metric object that's configured specifically for measuring WATTS.
     */
    static const QString watt_offset;
    static constexpr float default_watt_offset = 0;

    /**
     * @brief Adjusts value in a metric object that's configured specifically for measuring WATTS.
     */
    static const QString watt_gain;
    static constexpr float default_watt_gain = 1;

    static const QString power_avg_5s;
    static constexpr bool default_power_avg_5s = false;

    static const QString instant_power_on_pause;
    static constexpr bool default_instant_power_on_pause = false;

    /**
     * @brief Adjusts value in a metric object that's configured specifically for measuring SPEED.
     */
    static const QString speed_offset;
    static constexpr float default_speed_offset = 0;

    /**
     * @brief Adjusts value in a metric object that's configured specifically for measuring SPEED.
     */
    static const QString speed_gain;
    static constexpr float default_speed_gain = 1;

    static const QString filter_device;
    static const QString default_filter_device;

    static const QString strava_suffix;
    static const QString default_strava_suffix;

    static const QString cadence_sensor_name;
    static const QString default_cadence_sensor_name;

    static const QString cadence_sensor_as_bike;
    static constexpr bool default_cadence_sensor_as_bike = false;

    static const QString cadence_sensor_speed_ratio;
    static constexpr float default_cadence_sensor_speed_ratio = 0.33;

    static const QString power_hr_pwr1;
    static constexpr float default_power_hr_pwr1 = 200;

    static const QString power_hr_hr1;
    static constexpr float default_power_hr_hr1 = 150;

    static const QString power_hr_pwr2;
    static constexpr float default_power_hr_pwr2 = 230;

    static const QString power_hr_hr2;
    static constexpr float default_power_hr_hr2 = 170;

    static const QString power_sensor_name;
    static const QString default_power_sensor_name;

    static const QString power_sensor_as_bike;
    static constexpr bool default_power_sensor_as_bike = false;

    static const QString power_sensor_as_treadmill;
    static constexpr bool default_power_sensor_as_treadmill = false;

    static const QString powr_sensor_running_cadence_double;
    static constexpr bool default_powr_sensor_running_cadence_double = false;

    static const QString elite_rizer_name;
    static const QString default_elite_rizer_name;

    static const QString elite_sterzo_smart_name;
    static const QString default_elite_sterzo_smart_name;

    static const QString ftms_accessory_name;
    static const QString default_ftms_accessory_name;

    static const QString ss2k_shift_step;
    static constexpr float default_ss2k_shift_step = 900;

    static const QString fitmetria_fanfit_enable;
    static constexpr bool default_fitmetria_fanfit_enable = false;

    static const QString fitmetria_fanfit_mode;
    static const QString default_fitmetria_fanfit_mode;

    static const QString fitmetria_fanfit_min;
    static constexpr float default_fitmetria_fanfit_min = 0;

    static const QString fitmetria_fanfit_max;
    static constexpr float default_fitmetria_fanfit_max = 100;
    /**
     *@brief Indicates if the virtual device should send resistance requests to the bike.
     */
    static const QString virtualbike_forceresistance;
    static constexpr bool default_virtualbike_forceresistance = true;
    /**
     *@brief Troubleshooting setting. Should be false unless advised by QZ tech support.
     */
    static const QString bluetooth_relaxed;
    static constexpr bool default_bluetooth_relaxed = false;
    /**
     *@brief Troubleshooting setting. Should be false unless advised by QZ tech support.
     */
    static const QString bluetooth_30m_hangs;
    static constexpr bool default_bluetooth_30m_hangs = false;

    static const QString battery_service;
    static constexpr bool default_battery_service = false;

    /**
     *@brief Experimental feature. Not recommended to use.
     */
    static const QString service_changed;
    static constexpr bool default_service_changed = false;

    /**
     *@brief Enable/disable the virtual device that connects QZ to the client app.
     */
    static const QString virtual_device_enabled;
    static constexpr bool default_virtual_device_enabled = true;
    /**
     *@brief Enable/disable the Bluetooth connectivity of the virtual device that connects QZ to the client app.
     */
    static const QString virtual_device_bluetooth;
    static constexpr bool default_virtual_device_bluetooth = true;

    static const QString ios_peloton_workaround;
    static constexpr bool default_ios_peloton_workaround = true;

    static const QString android_wakelock;
    static constexpr bool default_android_wakelock = true;
    /**
     *@brief Specifies if the debug log file will be written.
     */
    static const QString log_debug;
    static constexpr bool default_log_debug = false;
    /**
     *@brief Force QZ to communicate ONLY the Heart Rate metric to third-party apps.
     */
    static const QString virtual_device_onlyheart;
    static constexpr bool default_virtual_device_onlyheart = false;
    /**
     *@brief Enables QZ to communicate with the Echelon app.
     *This setting can only be used with iOS running QZ and iOS running the Echelon app.
     */
    static const QString virtual_device_echelon;
    static constexpr bool default_virtual_device_echelon = false;
    /**
     *@brief Enables a virtual bluetooth bridge to the iFit App.
     */
    static const QString virtual_device_ifit;
    static constexpr bool default_virtual_device_ifit = false;
    /**
     *@brief Instructs QZ to send a rower Bluetooth profile instead of a bike profile to third party apps that support
     *rowing (examples: Kinomap and BitGym). This should be off for Zwift.
     */
    static const QString virtual_device_rower;
    static constexpr bool default_virtual_device_rower = false;
    /**
     *@brief Used to force a non-bike device to be presented to client apps as a bike.
     */
    static const QString virtual_device_force_bike;
    static constexpr bool default_virtual_device_force_bike = false;

    static const QString volume_change_gears;
    static constexpr bool default_volume_change_gears = false;

    static const QString applewatch_fakedevice;
    static constexpr bool default_applewatch_fakedevice = false;

    /**
     *@brief Minimum target resistance for ERG mode.
     */
    static const QString zwift_erg_resistance_down;
    static constexpr float default_zwift_erg_resistance_down = 0.0;

    /**
     *@brief Maximum targe resistance for ERG mode.
     */
    static const QString zwift_erg_resistance_up;
    static constexpr float default_zwift_erg_resistance_up = 999.0;

    static const QString horizon_paragon_x;
    static constexpr bool default_horizon_paragon_x = false;

    static const QString treadmill_step_speed;
    static constexpr float default_treadmill_step_speed = 0.5;

    static const QString treadmill_step_incline;
    static constexpr float default_treadmill_step_incline = 0.5;

    static const QString fitshow_anyrun;
    static constexpr bool default_fitshow_anyrun = false;

    static const QString nordictrack_s30_treadmill;
    static constexpr bool default_nordictrack_s30_treadmill = false;

    // from version 2.10.23
    // not used anymore because it's an elliptical not a treadmill. Don't remove this
    // it will cause corruption in the settings
    // static const QString nordictrack_fs5i_treadmill;
    // static constexpr bool default_nordictrack_fs5i_treadmill = false;

    static const QString renpho_peloton_conversion_v2;
    static constexpr bool default_renpho_peloton_conversion_v2 = false;

    static const QString ss2k_resistance_sample_1;
    static constexpr float default_ss2k_resistance_sample_1 = 20;

    static const QString ss2k_shift_step_sample_1;
    static constexpr float default_ss2k_shift_step_sample_1 = 0;

    static const QString ss2k_resistance_sample_2;
    static constexpr float default_ss2k_resistance_sample_2 = 30;

    static const QString ss2k_shift_step_sample_2;
    static constexpr float default_ss2k_shift_step_sample_2 = 0;

    static const QString ss2k_resistance_sample_3;
    static constexpr float default_ss2k_resistance_sample_3 = 40;

    static const QString ss2k_shift_step_sample_3;
    static constexpr float default_ss2k_shift_step_sample_3 = 0;

    static const QString ss2k_resistance_sample_4;
    static constexpr float default_ss2k_resistance_sample_4 = 50;

    static const QString ss2k_shift_step_sample_4;
    static constexpr float default_ss2k_shift_step_sample_4 = 0;

    static const QString fitshow_truetimer;
    static constexpr bool default_fitshow_truetimer = false;

    static const QString elite_rizer_gain;
    static constexpr float default_elite_rizer_gain = 1.0;

    static const QString tile_ext_incline_enabled;
    static constexpr bool default_tile_ext_incline_enabled = false;

    static const QString tile_ext_incline_order;
    static constexpr int default_tile_ext_incline_order = 32;

    static const QString reebok_fr30_treadmill;
    static constexpr bool default_reebok_fr30_treadmill = false;

    static const QString horizon_treadmill_7_8;
    static constexpr bool default_horizon_treadmill_7_8 = false;

    /**
     *@brief The name of the profile for this settings file.
     */
    static const QString profile_name;
    static const QString default_profile_name;

    static const QString tile_cadence_color_enabled;
    static constexpr bool default_tile_cadence_color_enabled = false;

    static const QString tile_peloton_remaining_enabled;
    static constexpr bool default_tile_peloton_remaining_enabled = false;

    static const QString tile_peloton_remaining_order;
    static constexpr int default_tile_peloton_remaining_order = 22;

    static const QString tile_peloton_resistance_color_enabled;
    static constexpr bool default_tile_peloton_resistance_color_enabled = false;

    /**
     *@brief Enable the Wahoo Dircon device.
     */
    static const QString dircon_yes;
    static constexpr bool default_dircon_yes = true;

    static const QString dircon_server_base_port;
    static constexpr int default_dircon_server_base_port = 36866;

    static const QString ios_cache_heart_device;
    static constexpr bool default_ios_cache_heart_device = true;

    /**
     *@brief Count of the number of times the app has been opened.
     */
    static const QString app_opening;
    static constexpr int default_app_opening = 0;

    static const QString proformtdf4ip;
    static const QString default_proformtdf4ip;

    static const QString fitfiu_mc_v460;
    static constexpr bool default_fitfiu_mc_v460 = false;

    /**
     *@brief The mass of the bike in kilograms.
     */
    static const QString bike_weight;
    static constexpr float default_bike_weight = 0;

    static const QString kingsmith_encrypt_v2;
    static constexpr bool default_kingsmith_encrypt_v2 = false;

    static const QString proform_treadmill_9_0;
    static constexpr bool default_proform_treadmill_9_0 = false;

    static const QString proform_treadmill_1800i;
    static constexpr bool default_proform_treadmill_1800i = false;

    static const QString cadence_offset;
    static constexpr float default_cadence_offset = 0;

    static const QString cadence_gain;
    static constexpr float default_cadence_gain = 1;

    static const QString sp_ht_9600ie;
    static constexpr bool default_sp_ht_9600ie = false;

    /**
     * @brief Enable text to speech.
     */
    static const QString tts_enabled;
    static constexpr bool default_tts_enabled = false;

    static const QString tts_summary_sec;
    static constexpr int default_tts_summary_sec = 120;

    static const QString tts_act_speed;
    static constexpr bool default_tts_act_speed = false;

    static const QString tts_avg_speed;
    static constexpr bool default_tts_avg_speed = true;

    static const QString tts_max_speed;
    static constexpr bool default_tts_max_speed = false;

    static const QString tts_act_inclination;
    static constexpr bool default_tts_act_inclination = false;

    static const QString tts_act_cadence;
    static constexpr bool default_tts_act_cadence = false;

    static const QString tts_avg_cadence;
    static constexpr bool default_tts_avg_cadence = true;

    static const QString tts_max_cadence;
    static constexpr bool default_tts_max_cadence = false;

    static const QString tts_act_elevation;
    static constexpr bool default_tts_act_elevation = true;

    static const QString tts_act_calories;
    static constexpr bool default_tts_act_calories = true;

    static const QString tts_act_odometer;
    static constexpr bool default_tts_act_odometer = true;

    static const QString tts_act_pace;
    static constexpr bool default_tts_act_pace = false;

    static const QString tts_avg_pace;
    static constexpr bool default_tts_avg_pace = true;

    static const QString tts_max_pace;
    static constexpr bool default_tts_max_pace = false;

    static const QString tts_act_resistance;
    static constexpr bool default_tts_act_resistance = true;

    static const QString tts_avg_resistance;
    static constexpr bool default_tts_avg_resistance = true;

    static const QString tts_max_resistance;
    static constexpr bool default_tts_max_resistance = false;

    static const QString tts_act_watt;
    static constexpr bool default_tts_act_watt = false;

    static const QString tts_avg_watt;
    static constexpr bool default_tts_avg_watt = true;

    static const QString tts_max_watt;
    static constexpr bool default_tts_max_watt = true;

    static const QString tts_act_ftp;
    static constexpr bool default_tts_act_ftp = false;

    static const QString tts_avg_ftp;
    static constexpr bool default_tts_avg_ftp = true;

    static const QString tts_max_ftp;
    static constexpr bool default_tts_max_ftp = false;

    static const QString tts_act_heart;
    static constexpr bool default_tts_act_heart = true;

    static const QString tts_avg_heart;
    static constexpr bool default_tts_avg_heart = true;

    static const QString tts_max_heart;
    static constexpr bool default_tts_max_heart = false;

    static const QString tts_act_jouls;
    static constexpr bool default_tts_act_jouls = true;

    static const QString tts_act_elapsed;
    static constexpr bool default_tts_act_elapsed = true;

    static const QString tts_act_peloton_resistance;
    static constexpr bool default_tts_act_peloton_resistance = false;

    static const QString tts_avg_peloton_resistance;
    static constexpr bool default_tts_avg_peloton_resistance = false;

    static const QString tts_max_peloton_resistance;
    static constexpr bool default_tts_max_peloton_resistance = false;

    static const QString tts_act_target_peloton_resistance;
    static constexpr bool default_tts_act_target_peloton_resistance = true;

    static const QString tts_act_target_cadence;
    static constexpr bool default_tts_act_target_cadence = true;

    static const QString tts_act_target_power;
    static constexpr bool default_tts_act_target_power = true;

    static const QString tts_act_target_zone;
    static constexpr bool default_tts_act_target_zone = true;

    static const QString tts_act_target_speed;
    static constexpr bool default_tts_act_target_speed = true;

    static const QString tts_act_target_incline;
    static constexpr bool default_tts_act_target_incline = true;

    static const QString tts_act_watt_kg;
    static constexpr bool default_tts_act_watt_kg = false;

    static const QString tts_avg_watt_kg;
    static constexpr bool default_tts_avg_watt_kg = false;

    static const QString tts_max_watt_kg;
    static constexpr bool default_tts_max_watt_kg = false;

    /**
     *@brief Enable the fake device, emulating an elliptical trainer.
     */
    static const QString fakedevice_elliptical;
    static constexpr bool default_fakedevice_elliptical = false;

    static const QString nordictrack_2950_ip;
    static const QString default_nordictrack_2950_ip;

    static const QString tile_instantaneous_stride_length_enabled;
    static constexpr bool default_tile_instantaneous_stride_length_enabled = false;

    static const QString tile_instantaneous_stride_length_order;
    static constexpr int default_tile_instantaneous_stride_length_order = 32;

    static const QString tile_ground_contact_enabled;
    static constexpr bool default_tile_ground_contact_enabled = false;

    static const QString tile_ground_contact_order;
    static constexpr int default_tile_ground_contact_order = 33;

    static const QString tile_vertical_oscillation_enabled;
    static constexpr bool default_tile_vertical_oscillation_enabled = false;

    static const QString tile_vertical_oscillation_order;
    static constexpr int default_tile_vertical_oscillation_order = 34;

    /**
     *@brief The gender of the user.
     */
    static const QString sex;
    static const QString default_sex;

    static const QString maps_type;
    static const QString default_maps_type;

    static const QString ss2k_max_resistance;
    static constexpr float default_ss2k_max_resistance = 100;

    static const QString ss2k_min_resistance;
    static constexpr float default_ss2k_min_resistance = 0;

    static const QString proform_treadmill_se;
    static constexpr bool default_proform_treadmill_se = false;

    /**
     *@brief The IP address for the Proform Treadmill.
     */
    static const QString proformtreadmillip;
    static const QString default_proformtreadmillip;
    // from version 2.11.22
    /**
     *@brief
     */
    static const QString kingsmith_encrypt_v3;
    static constexpr bool default_kingsmith_encrypt_v3 = false;

    /**
     *@brief IP address for the TDF 10.
     */
    static const QString tdf_10_ip;
    static const QString default_tdf_10_ip;

    /**
     *@brief
     */
    static const QString fakedevice_treadmill;
    static constexpr bool default_fakedevice_treadmill = false;

    /**
     *@brief The number of seconds to add to the video timestamp.
     */
    static const QString video_playback_window_s;
    static constexpr int default_video_playback_window_s = 12;

    static const QString horizon_treadmill_profile_user1;
    static const QString default_horizon_treadmill_profile_user1;

    static const QString horizon_treadmill_profile_user2;
    static const QString default_horizon_treadmill_profile_user2;

    static const QString horizon_treadmill_profile_user3;
    static const QString default_horizon_treadmill_profile_user3;

    static const QString horizon_treadmill_profile_user4;
    static const QString default_horizon_treadmill_profile_user4;

    static const QString horizon_treadmill_profile_user5;
    static const QString default_horizon_treadmill_profile_user5;

    static const QString nordictrack_gx_2_7;
    static const bool default_nordictrack_gx_2_7 = false;

    static const QString rolling_resistance;
    static constexpr double default_rolling_resistance = 0.005;

    static const QString wahoo_rgt_dircon;
    static constexpr bool default_wahoo_rgt_dircon = false;

    static const QString tts_description_enabled;
    static constexpr bool default_tts_description_enabled = true;

    static const QString tile_preset_resistance_1_enabled;
    static constexpr bool default_tile_preset_resistance_1_enabled = false;

    static const QString tile_preset_resistance_1_order;
    static constexpr int default_tile_preset_resistance_1_order = 33;

    static const QString tile_preset_resistance_1_value;
    static constexpr double default_tile_preset_resistance_1_value = 1;

    static const QString tile_preset_resistance_1_label;
    static const QString default_tile_preset_resistance_1_label;

    static const QString tile_preset_resistance_2_enabled;
    static constexpr bool default_tile_preset_resistance_2_enabled = false;

    static const QString tile_preset_resistance_2_order;
    static constexpr int default_tile_preset_resistance_2_order = 34;

    static const QString tile_preset_resistance_2_value;
    static constexpr double default_tile_preset_resistance_2_value = 10;

    static const QString tile_preset_resistance_2_label;
    static const QString default_tile_preset_resistance_2_label;

    static const QString tile_preset_resistance_3_enabled;
    static constexpr bool default_tile_preset_resistance_3_enabled = false;

    static const QString tile_preset_resistance_3_order;
    static constexpr int default_tile_preset_resistance_3_order = 35;

    static const QString tile_preset_resistance_3_value;
    static constexpr double default_tile_preset_resistance_3_value = 20;

    static const QString tile_preset_resistance_3_label;
    static const QString default_tile_preset_resistance_3_label;

    static const QString tile_preset_resistance_4_enabled;
    static constexpr bool default_tile_preset_resistance_4_enabled = false;

    static const QString tile_preset_resistance_4_order;
    static constexpr int default_tile_preset_resistance_4_order = 36;

    static const QString tile_preset_resistance_4_value;
    static constexpr double default_tile_preset_resistance_4_value = 25;

    static const QString tile_preset_resistance_4_label;
    static const QString default_tile_preset_resistance_4_label;

    static const QString tile_preset_resistance_5_enabled;
    static constexpr bool default_tile_preset_resistance_5_enabled = false;

    static const QString tile_preset_resistance_5_order;
    static constexpr int default_tile_preset_resistance_5_order = 37;

    static const QString tile_preset_resistance_5_value;
    static constexpr double default_tile_preset_resistance_5_value = 30;

    static const QString tile_preset_resistance_5_label;
    static const QString default_tile_preset_resistance_5_label;

    static const QString tile_preset_speed_1_enabled;
    static constexpr bool default_tile_preset_speed_1_enabled = false;

    static const QString tile_preset_speed_1_order;
    static constexpr int default_tile_preset_speed_1_order = 38;

    static const QString tile_preset_speed_1_value;
    static constexpr double default_tile_preset_speed_1_value = 5;

    static const QString tile_preset_speed_1_label;
    static const QString default_tile_preset_speed_1_label;

    static const QString tile_preset_speed_2_enabled;
    static constexpr bool default_tile_preset_speed_2_enabled = false;

    static const QString tile_preset_speed_2_order;
    static constexpr int default_tile_preset_speed_2_order = 39;

    static const QString tile_preset_speed_2_value;
    static constexpr double default_tile_preset_speed_2_value = 7;

    static const QString tile_preset_speed_2_label;
    static const QString default_tile_preset_speed_2_label;

    static const QString tile_preset_speed_3_enabled;
    static constexpr bool default_tile_preset_speed_3_enabled = false;

    static const QString tile_preset_speed_3_order;
    static constexpr int default_tile_preset_speed_3_order = 40;

    static const QString tile_preset_speed_3_value;
    static constexpr double default_tile_preset_speed_3_value = 10;

    static const QString tile_preset_speed_3_label;
    static const QString default_tile_preset_speed_3_label;

    static const QString tile_preset_speed_4_enabled;
    static constexpr bool default_tile_preset_speed_4_enabled = false;

    static const QString tile_preset_speed_4_order;
    static constexpr int default_tile_preset_speed_4_order = 41;

    static const QString tile_preset_speed_4_value;
    static constexpr double default_tile_preset_speed_4_value = 11;

    static const QString tile_preset_speed_4_label;
    static const QString default_tile_preset_speed_4_label;

    static const QString tile_preset_speed_5_enabled;
    static constexpr bool default_tile_preset_speed_5_enabled = false;

    static const QString tile_preset_speed_5_order;
    static constexpr int default_tile_preset_speed_5_order = 42;

    static const QString tile_preset_speed_5_value;
    static constexpr double default_tile_preset_speed_5_value = 12;

    static const QString tile_preset_speed_5_label;
    static const QString default_tile_preset_speed_5_label;

    static const QString tile_preset_inclination_1_enabled;
    static constexpr bool default_tile_preset_inclination_1_enabled = false;

    static const QString tile_preset_inclination_1_order;
    static constexpr int default_tile_preset_inclination_1_order = 43;

    static const QString tile_preset_inclination_1_value;
    static constexpr double default_tile_preset_inclination_1_value = 0;

    static const QString tile_preset_inclination_1_label;
    static const QString default_tile_preset_inclination_1_label;

    static const QString tile_preset_inclination_2_enabled;
    static constexpr bool default_tile_preset_inclination_2_enabled = false;

    static const QString tile_preset_inclination_2_order;
    static constexpr int default_tile_preset_inclination_2_order = 44;

    static const QString tile_preset_inclination_2_value;
    static constexpr double default_tile_preset_inclination_2_value = 1;

    static const QString tile_preset_inclination_2_label;
    static const QString default_tile_preset_inclination_2_label;

    static const QString tile_preset_inclination_3_enabled;
    static constexpr bool default_tile_preset_inclination_3_enabled = false;

    static const QString tile_preset_inclination_3_order;
    static constexpr int default_tile_preset_inclination_3_order = 45;

    static const QString tile_preset_inclination_3_value;
    static constexpr double default_tile_preset_inclination_3_value = 2;

    static const QString tile_preset_inclination_3_label;
    static const QString default_tile_preset_inclination_3_label;

    static const QString tile_preset_inclination_4_enabled;
    static constexpr bool default_tile_preset_inclination_4_enabled = false;

    static const QString tile_preset_inclination_4_order;
    static constexpr int default_tile_preset_inclination_4_order = 46;

    static const QString tile_preset_inclination_4_value;
    static constexpr double default_tile_preset_inclination_4_value = 3;

    static const QString tile_preset_inclination_4_label;
    static const QString default_tile_preset_inclination_4_label;

    static const QString tile_preset_inclination_5_enabled;
    static constexpr bool default_tile_preset_inclination_5_enabled = false;

    static const QString tile_preset_inclination_5_order;
    static constexpr int default_tile_preset_inclination_5_order = 47;

    static const QString tile_preset_inclination_5_value;
    static constexpr double default_tile_preset_inclination_5_value = 4;

    static const QString tile_preset_inclination_5_label;
    static const QString default_tile_preset_inclination_5_label;

    static const QString tile_preset_resistance_1_color;
    static const QString default_tile_preset_resistance_1_color;

    static const QString tile_preset_resistance_2_color;
    static const QString default_tile_preset_resistance_2_color;

    static const QString tile_preset_resistance_3_color;
    static const QString default_tile_preset_resistance_3_color;

    static const QString tile_preset_resistance_4_color;
    static const QString default_tile_preset_resistance_4_color;

    static const QString tile_preset_resistance_5_color;
    static const QString default_tile_preset_resistance_5_color;

    static const QString tile_preset_speed_1_color;
    static const QString default_tile_preset_speed_1_color;

    static const QString tile_preset_speed_2_color;
    static const QString default_tile_preset_speed_2_color;

    static const QString tile_preset_speed_3_color;
    static const QString default_tile_preset_speed_3_color;

    static const QString tile_preset_speed_4_color;
    static const QString default_tile_preset_speed_4_color;

    static const QString tile_preset_speed_5_color;
    static const QString default_tile_preset_speed_5_color;

    static const QString tile_preset_inclination_1_color;
    static const QString default_tile_preset_inclination_1_color;

    static const QString tile_preset_inclination_2_color;
    static const QString default_tile_preset_inclination_2_color;

    static const QString tile_preset_inclination_3_color;
    static const QString default_tile_preset_inclination_3_color;

    static const QString tile_preset_inclination_4_color;
    static const QString default_tile_preset_inclination_4_color;

    static const QString tile_preset_inclination_5_color;
    static const QString default_tile_preset_inclination_5_color;

    static const QString tile_avg_watt_lap_enabled;
    static constexpr bool default_tile_avg_watt_lap_enabled = false;

    static const QString tile_avg_watt_lap_order;
    static constexpr int default_tile_avg_watt_lap_order = 48;

    static const QString nordictrack_t70_treadmill;
    static constexpr bool default_nordictrack_t70_treadmill = false;

    /**
     * @brief Write the QSettings values using the constants from this namespace.
     * @param showDefaults Optionally indicates if the default should be shown with the key.
     */
    void qDebugAllSettings(bool showDefaults = false);
};

#endif