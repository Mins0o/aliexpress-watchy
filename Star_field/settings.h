#ifndef SETTINGS_H
#define SETTINGS_H

//Weather Settings
#define CITY_ID "1796231" //New York City https://openweathermap.org/current#cityid
#define OPENWEATHERMAP_APIKEY "0d1949854101140caad159dc9a23ca86" //use your own API key :)
#define OPENWEATHERMAP_URL "http://api.openweathermap.org/data/2.5/weather?id={cityID}&units={units}&apiKey={apiKey}&lang={lang}" //open weather api
#define TEMP_UNIT "metric" //metric = Celsius , imperial = Fahrenheit
#define TEMP_LANG "en"
#define WEATHER_UPDATE_INTERVAL 30 //must be greater than 5, measured in minutes
//NTP Settings
#define NTP_SERVER "pool.ntp.org"
#define GMT_OFFSET_SEC 3600 * 8 //New York is UTC -5
#define DST_OFFSET_SEC 3600

watchySettings settings{
    .cityID = CITY_ID,
    .weatherAPIKey = OPENWEATHERMAP_APIKEY,
    .weatherURL = OPENWEATHERMAP_URL,
    .weatherUnit = TEMP_UNIT,
    .weatherLang = TEMP_LANG,
    .weatherUpdateInterval = WEATHER_UPDATE_INTERVAL,
    .ntpServer = NTP_SERVER,
    .gmtOffset = GMT_OFFSET_SEC
};

#endif