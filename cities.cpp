#include "cities.h"




    std::vector<City> allCities;

    // Constructor
    Cities::Cities()
    {
        // prefills collection with all cities needed for
        // application.  may want to switch to data file.
        City c;

        c.setAllParameters(1796236, "Shanghai", "China", 31.22222, 121.45806, 8); allCities.push_back(c);
        c.setAllParameters(745044, "Istanbul", "Turkey", 41.01384, 28.94966, 3); allCities.push_back(c);
        c.setAllParameters(3435910, "Buenos Aires", "Argentina", -34.61315, -58.37723, -3); allCities.push_back(c);
        c.setAllParameters(3530597, "Mexico City", "Mexico", 19.42847, -99.12766, -6); allCities.push_back(c);
        c.setAllParameters(1816670, "Beijing", "China", 39.9075, 116.39723, 8); allCities.push_back(c);
        c.setAllParameters(524901, "Moscow", "Russia", 55.75222, 37.61556, 3); allCities.push_back(c);
        c.setAllParameters(1835848, "Seoul", "South Korea", 37.566, 126.9784, 9); allCities.push_back(c);
        c.setAllParameters(3448439, "Sao Paulo", "Brazil", -23.5475, -46.63611, -3); allCities.push_back(c);
        c.setAllParameters(1850147, "Tokyo", "Japan", 35.6895, 139.69171, 9); allCities.push_back(c);
        c.setAllParameters(5128581, "New York City", "United States", 40.71427, -74.00597, -5); allCities.push_back(c);
        c.setAllParameters(1668341, "Taipei", "Taiwan", 25.04776, 121.53185, 8); allCities.push_back(c);
        c.setAllParameters(3936456, "Lima", "Peru", -12.04318, -77.02824, -5); allCities.push_back(c);
        c.setAllParameters(360630, "Cairo", "Egypt", 30.06263, 31.24967, 2); allCities.push_back(c);
        c.setAllParameters(2643743, "London", "United Kingdom", 51.50853, -0.12574, 0); allCities.push_back(c);
        c.setAllParameters(1819729, "Hong Kong", "Hong Kong", 22.27832, 114.17469, 8); allCities.push_back(c);
        c.setAllParameters(3451190, "Rio de Janeiro", "Brazil", -22.90642, -43.18223, -3); allCities.push_back(c);
        c.setAllParameters(1609350, "Bangkok", "Thailand", 13.75398, 100.50144, 7); allCities.push_back(c);
        c.setAllParameters(3871336, "Santiago", "Chile", -33.45694, -70.64827, -3); allCities.push_back(c);
        c.setAllParameters(2147714, "Sydney", "Australia", -33.86785, 151.20732, 11); allCities.push_back(c);
        c.setAllParameters(108410, "Riyadh", "Saudi Arabia", 24.68773, 46.72185, 3); allCities.push_back(c);
        c.setAllParameters(5368361, "Los Angeles", "United States", 34.05223, -118.24368, -8); allCities.push_back(c);
        c.setAllParameters(3369157, "Cape Town", "South Africa", -33.92584, 18.42322, 2); allCities.push_back(c);
        c.setAllParameters(2950159, "Berlin", "Germany", 52.52437, 13.41053, 1); allCities.push_back(c);
        c.setAllParameters(3117735, "Madrid", "Spain", 40.4165, -3.70256, 1); allCities.push_back(c);
        c.setAllParameters(1871859, "Pyongyang", "North Korea", 39.03385, 125.75432, 9); allCities.push_back(c);
        c.setAllParameters(292223, "Dubai", "United Arab Emirates", 25.07725, 55.30927, 4); allCities.push_back(c);
        c.setAllParameters(4887398, "Chicago", "United States", 41.85003, -87.65005, -6); allCities.push_back(c);
        c.setAllParameters(6167865, "Toronto", "Canada", 43.70011, -79.4163, -5); allCities.push_back(c);
        c.setAllParameters(3169070, "Rome", "Italy", 41.89193, 12.51133, 1); allCities.push_back(c);
        c.setAllParameters(4699066, "Houston", "United States", 29.76328, -95.36327, -6); allCities.push_back(c);
        c.setAllParameters(2174003, "Brisbane", "Australia", -27.46794, 153.02809, 10); allCities.push_back(c);
        c.setAllParameters(2988507, "Paris", "France", 48.85341, 2.3488, 1); allCities.push_back(c);
        c.setAllParameters(993800, "Johannesburg", "South Africa", -26.20227, 28.04363, 2); allCities.push_back(c);
        c.setAllParameters(2063523, "Perth", "Australia", -31.95224, 115.8614, 8); allCities.push_back(c);
        c.setAllParameters(5308655, "Phoenix", "United States", 33.44838, -112.07404, -7); allCities.push_back(c);
        c.setAllParameters(5391811, "San Diego", "United States", 32.71571, -117.16472, -8); allCities.push_back(c);
        c.setAllParameters(4684888, "Dallas", "United States", 32.78306, -96.80667, -6); allCities.push_back(c);
        c.setAllParameters(5392171, "San Jose", "United States", 37.33939, -121.89496, -8); allCities.push_back(c);
        c.setAllParameters(2317765, "Zaria", "Nigeria", 11.11128, 7.7227, 1); allCities.push_back(c);
        c.setAllParameters(5419384, "Denver", "United States", 39.73915, -104.9847, -7); allCities.push_back(c);
        c.setAllParameters(5520993, "El Paso", "United States", 31.75872, -106.48693, -7); allCities.push_back(c);
        c.setAllParameters(4990729, "Detroit", "United States", 42.33143, -83.04575, -5); allCities.push_back(c);
        c.setAllParameters(1275339, "Mumbai" ,  "India" , 19.07283 , 72.88261 , 5.5); allCities.push_back(c);
        c.setAllParameters(1174872, "Karachi" ,  "Pakistan" , 24.8608 , 67.0104 , 5); allCities.push_back(c);
        c.setAllParameters(1792947, "Tianjin" ,  "China" , 39.14222 , 117.17667 , 8); allCities.push_back(c);
        c.setAllParameters(1809858, "Guangzhou" ,  "China" , 23.11667 , 113.25 , 8); allCities.push_back(c);
        c.setAllParameters(1273294, "Delhi" ,  "India" , 28.65195 , 77.23149 , 5.5); allCities.push_back(c);
        c.setAllParameters(1795565, "Shenzhen" ,  "China" , 22.54554 , 114.0683 , 8); allCities.push_back(c);
        c.setAllParameters(1185241, "Dhaka" ,  "Bangladesh" , 23.7104 , 90.40744 , 6); allCities.push_back(c);
        c.setAllParameters(1791247, "Wuhan" ,  "China" , 30.58333 , 114.26667 , 8); allCities.push_back(c);
        c.setAllParameters(2332459, "Lagos" ,  "Nigeria" , 6.45407 , 3.39467 , 1); allCities.push_back(c);
        c.setAllParameters(1642911, "Jakarta" ,  "Indonesia" , -6.21462 , 106.84513 , 7); allCities.push_back(c);
        c.setAllParameters(2314302, "Kinshasa" ,  "Democratic Republic of the Congo" , -4.32758 , 15.31357 , 1); allCities.push_back(c);
        c.setAllParameters(3688689, "Bogota" ,  "Colombia" , 4.60971 , -74.08175 , -5); allCities.push_back(c);
        c.setAllParameters(1814906, "Chongqing" ,  "China" , 29.56026 , 106.55771 , 8); allCities.push_back(c);
        c.setAllParameters(1815286, "Chengdu" ,  "China" , 30.66667 , 104.06667 , 8); allCities.push_back(c);
        c.setAllParameters(1812545, "Dongguan" ,  "China" , 23.01797 , 113.74866 , 8); allCities.push_back(c);
        c.setAllParameters(98182, "Baghdad" ,  "Iraq" , 33.34058 , 44.40088 , 3); allCities.push_back(c);
        c.setAllParameters(1811103, "Foshan" ,  "China" , 23.02677 , 113.13148 , 8); allCities.push_back(c);
        c.setAllParameters(1799962, "Nanjing" ,  "China" , 32.06167 , 118.77778 , 8); allCities.push_back(c);
        c.setAllParameters(112931, "Tehran" ,  "Iran" , 35.69439 , 51.42151 , 3.5); allCities.push_back(c);
        c.setAllParameters(1790630, "Xi'an" ,  "China" , 34.25833 , 108.92861 , 8); allCities.push_back(c);
        c.setAllParameters(1279233, "Ahmedabad" ,  "India" , 23.02579 , 72.58727 , 5.5); allCities.push_back(c);
        c.setAllParameters(1172451, "Lahore" ,  "Pakistan" , 31.558 , 74.35071 , 5); allCities.push_back(c);
        c.setAllParameters(2034937, "Shenyang" ,  "China" , 41.79222 , 123.43278 , 8); allCities.push_back(c);
        c.setAllParameters(1808926, "Hangzhou" ,  "China" , 30.29365 , 120.16142 , 8); allCities.push_back(c);
        c.setAllParameters(2037013, "Harbin" ,  "China" , 45.75 , 126.65 , 8); allCities.push_back(c);
        c.setAllParameters(1886760, "Suzhou" ,  "China" , 31.30408 , 120.59538 , 8); allCities.push_back(c);
        c.setAllParameters(1795940, "Shantou" ,  "China" , 23.36814 , 116.71479 , 8); allCities.push_back(c);
        c.setAllParameters(1277333, "Bengaluru" ,  "India" , 12.97194 , 77.59369 , 5.5); allCities.push_back(c);
        c.setAllParameters(498817, "Saint Petersburg" ,  "Russia" , 59.93863 , 30.31413 , 3); allCities.push_back(c);
        c.setAllParameters(1275004, "Kolkata" ,  "India" , 22.56263 , 88.36304 , 5.5); allCities.push_back(c);
        c.setAllParameters(1255364, "Surat" ,  "India" , 21.19594 , 72.83023 , 5.5); allCities.push_back(c);
        c.setAllParameters(1793511, "Taiyuan" ,  "China" , 37.86944 , 112.56028 , 8); allCities.push_back(c);
        c.setAllParameters(1298824, "Yangon" ,  "Myanmar" , 16.80528 , 96.15611 , 6.5); allCities.push_back(c);
        c.setAllParameters(1805753, "Jinan" ,  "China" , 36.66833 , 116.99722 , 8); allCities.push_back(c);
        c.setAllParameters(1264527, "Chennai" ,  "India" , 13.08784 , 80.27847 , 5.5); allCities.push_back(c);
        c.setAllParameters(1784658, "Zhengzhou" ,  "China" , 34.75778 , 113.64861 , 8); allCities.push_back(c);
        c.setAllParameters(2158177, "Melbourne" ,  "Australia" , -37.814 , 144.96332 , 11); allCities.push_back(c);
        c.setAllParameters(2038180, "Changchun" ,  "China" , 43.88 , 125.32278 , 8); allCities.push_back(c);
        c.setAllParameters(1814087, "Dalian" ,  "China" , 38.91222 , 121.60222 , 8); allCities.push_back(c);
        c.setAllParameters(1795270, "Shijiazhuang" ,  "China" , 38.04139 , 114.47861 , 8); allCities.push_back(c);
        c.setAllParameters(1205733, "Chattogram" ,  "Bangladesh" , 22.3384 , 91.83168 , 6); allCities.push_back(c);
        c.setAllParameters(1804651, "Kunming" ,  "China" , 25.03889 , 102.71833 , 8); allCities.push_back(c);
        c.setAllParameters(1799869, "Nanning" ,  "China" , 22.81667 , 108.31667 , 8); allCities.push_back(c);
        c.setAllParameters(361058, "Alexandria" ,  "Egypt" , 31.20176 , 29.91582 , 2); allCities.push_back(c);
        c.setAllParameters(1797929, "Qingdao" ,  "China" , 36.06488 , 120.38042 , 8); allCities.push_back(c);
        c.setAllParameters(1838524, "Busan" ,  "South Korea" , 35.10168 , 129.03004 , 9); allCities.push_back(c);
        c.setAllParameters(2293538, "Abidjan" ,  "Ivory Coast" , 5.35444 , -4.00167 , 0); allCities.push_back(c);
        c.setAllParameters(2335204, "Kano" ,  "Nigeria" , 12.00012 , 8.51672 , 1); allCities.push_back(c);
        c.setAllParameters(1269843, "Hyderabad" ,  "India" , 17.38405 , 78.45636 , 5.5); allCities.push_back(c);
        c.setAllParameters(1798425, "Puyang" ,  "China" , 29.45679 , 119.88872 , 8); allCities.push_back(c);
        c.setAllParameters(1848354, "Yokohama" ,  "Japan" , 35.43333 , 139.65 , 9); allCities.push_back(c);
        c.setAllParameters(2339354, "Ibadan" ,  "Nigeria" , 7.37756 , 3.90591 , 1); allCities.push_back(c);
        c.setAllParameters(1880252, "Singapore" ,  "Singapore" , 1.28967 , 103.85007 , 8); allCities.push_back(c);
        c.setAllParameters(1790923, "Wuxi" ,  "China" , 31.56887 , 120.28857 , 8); allCities.push_back(c);
        c.setAllParameters(1790645, "Xiamen" ,  "China" , 24.47979 , 118.08187 , 8); allCities.push_back(c);
        c.setAllParameters(323786, "Ankara" ,  "Turkey" , 39.91987 , 32.85427 , 3); allCities.push_back(c);
        c.setAllParameters(1799397, "Ningbo" ,  "China" , 29.87819 , 121.54945 , 8); allCities.push_back(c);
        c.setAllParameters(1566083, "Ho Chi Minh City" ,  "Vietnam" , 10.82302 , 106.62965 , 7); allCities.push_back(c);
        c.setAllParameters(1794903, "Shiyan" ,  "China" , 32.6475 , 110.77806 , 8); allCities.push_back(c);
        c.setAllParameters(1793346, "Tangshan" ,  "China" , 39.63333 , 118.18333 , 8); allCities.push_back(c);
        c.setAllParameters(1808722, "Hefei" ,  "China" , 31.86389 , 117.28083 , 8); allCities.push_back(c);
        c.setAllParameters(1815456, "Changzhou" ,  "China" , 31.77359 , 119.95401 , 8); allCities.push_back(c);
        c.setAllParameters(2553604, "Casablanca" ,  "Morocco" , 33.58831 , -7.61138 , 1); allCities.push_back(c);
        c.setAllParameters(1785286, "Zibo" ,  "China" , 36.79056 , 118.06333 , 8); allCities.push_back(c);
        c.setAllParameters(1007311, "Durban" ,  "South Africa" , -29.8579 , 31.0292 , 2); allCities.push_back(c);
        c.setAllParameters(1810821, "Fuzhou" ,  "China" , 26.06139 , 119.30611 , 8); allCities.push_back(c);
        c.setAllParameters(1815577, "Changsha" ,  "China" , 28.19874 , 112.97087 , 8); allCities.push_back(c);
        c.setAllParameters(1138958, "Kabul" ,  "Afghanistan" , 34.52813 , 69.17233 , 4.5); allCities.push_back(c);
        c.setAllParameters(1809461, "Guiyang" ,  "China" , 26.58333 , 106.71667 , 8); allCities.push_back(c);
        c.setAllParameters(1529102, "UEruemqi" ,  "China" , 43.80096 , 87.60046 , 6); allCities.push_back(c);
        c.setAllParameters(3646738, "Caracas" ,  "Venezuela" , 10.48801 , -66.87919 , -4); allCities.push_back(c);
        c.setAllParameters(1259229, "Pune" ,  "India" , 18.51957 , 73.85535 , 5.5); allCities.push_back(c);
        c.setAllParameters(105343, "Jeddah" ,  "Saudi Arabia" , 21.49012 , 39.18624 , 3); allCities.push_back(c);
        c.setAllParameters(1267995, "Kanpur" ,  "India" , 26.46523 , 80.34975 , 5.5); allCities.push_back(c);
        c.setAllParameters(703448, "Kyiv" ,  "Ukraine" , 50.45466 , 30.5238 , 2); allCities.push_back(c);
        c.setAllParameters(2240449, "Luanda" ,  "Angola" , -8.83682 , 13.23432 , 1); allCities.push_back(c);
        c.setAllParameters(1692192, "Quezon City" ,  "Philippines" , 14.6488 , 121.0509 , 8); allCities.push_back(c);
        c.setAllParameters(344979, "Addis Ababa" ,  "Ethiopia" , 9.02497 , 38.74689 , 3); allCities.push_back(c);
        c.setAllParameters(184745, "Nairobi" ,  "Kenya" , -1.28333 , 36.81667 , 3); allCities.push_back(c);
        c.setAllParameters(6986104, "Zhongshan" ,  "China" , 22.52306 , 113.37912 , 8); allCities.push_back(c);
        c.setAllParameters(1816971, "Baoding" ,  "China" , 38.85111 , 115.49028 , 8); allCities.push_back(c);
        c.setAllParameters(3450554, "Salvador" ,  "Brazil" , -12.97111 , -38.51083 , -3); allCities.push_back(c);
        c.setAllParameters(1269515, "Jaipur" ,  "India" , 26.91962 , 75.78781 , 5.5); allCities.push_back(c);
        c.setAllParameters(160263, "Dar es Salaam" ,  "Tanzania" , -6.82349 , 39.26951 , 3); allCities.push_back(c);
        c.setAllParameters(1791388, "Wenzhou" ,  "China" , 27.99942 , 120.66682 , 8); allCities.push_back(c);
        c.setAllParameters(1804430, "Lanzhou" ,  "China" , 36.05701 , 103.83987 , 8); allCities.push_back(c);
        c.setAllParameters(1843564, "Incheon" ,  "South Korea" , 37.45646 , 126.70515 , 9); allCities.push_back(c);
        c.setAllParameters(1785725, "Yunfu" ,  "China" , 22.92833 , 112.03954 , 8); allCities.push_back(c);
        c.setAllParameters(6619347, "Navi Mumbai" ,  "India" , 19.03681 , 73.01582 , 5.5); allCities.push_back(c);
        c.setAllParameters(99532, "Basrah" ,  "Iraq" , 30.50852 , 47.7804 , 3); allCities.push_back(c);
        c.setAllParameters(1853909, "Osaka" ,  "Japan" , 34.69374 , 135.50218 , 9); allCities.push_back(c);
        c.setAllParameters(53654, "Mogadishu" ,  "Somalia" , 2.03711 , 45.34375 , 3); allCities.push_back(c);
        c.setAllParameters(1835329, "Daegu" ,  "South Korea" , 35.87028 , 128.59111 , 9); allCities.push_back(c);
        c.setAllParameters(1801180, "Maoming" ,  "China" , 21.65 , 110.9 , 8); allCities.push_back(c);
        c.setAllParameters(1179400, "Faisalabad" ,  "Pakistan" , 31.41554 , 73.08969 , 5); allCities.push_back(c);
        c.setAllParameters(311046, "Izmir" ,  "Turkey" , 38.41273 , 27.13838 , 3); allCities.push_back(c);
        c.setAllParameters(1797873, "Huai'an" ,  "China" , 33.58861 , 119.01917 , 8); allCities.push_back(c);
        c.setAllParameters(2253354, "Dakar" ,  "Senegal" , 14.6937 , -17.44406 , 0); allCities.push_back(c);
        c.setAllParameters(1264733, "Lucknow" ,  "India" , 26.83928 , 80.92313 , 5.5); allCities.push_back(c);
        c.setAllParameters(360995, "Giza" ,  "Egypt" , 30.00944 , 31.20861 , 2); allCities.push_back(c);
        c.setAllParameters(3399415, "Fortaleza" ,  "Brazil" , -3.71722 , -38.54306 , -3); allCities.push_back(c);
        c.setAllParameters(3687925, "Cali" ,  "Colombia" , 3.43722 , -76.5225 , -5); allCities.push_back(c);
        c.setAllParameters(1625822, "Surabaya" ,  "Indonesia" , -7.24917 , 112.75083 , 7); allCities.push_back(c);
        c.setAllParameters(3470127, "Belo Horizonte" ,  "Brazil" , -19.92083 , -43.93778 , -3); allCities.push_back(c);
        c.setAllParameters(1800163, "Nanchang" ,  "China" , 28.68396 , 115.85306 , 8); allCities.push_back(c);
        c.setAllParameters(124665, "Mashhad" ,  "Iran" , 36.29807 , 59.60567 , 3.5); allCities.push_back(c);
        c.setAllParameters(1803318, "Linyi" ,  "China" , 35.06306 , 118.34278 , 8); allCities.push_back(c);
        c.setAllParameters(5110302, "Brooklyn" ,  "United States" , 40.6501 , -73.94958 , -5); allCities.push_back(c);
        c.setAllParameters(1799722, "Nantong" ,  "China" , 32.03028 , 120.87472 , 8); allCities.push_back(c);
        c.setAllParameters(5133273, "Queens" ,  "United States" , 40.68149 , -73.83652 , -5); allCities.push_back(c);
        c.setAllParameters(1262180, "Nagpur" ,  "India" , 21.14631 , 79.08491 , 5.5); allCities.push_back(c);
        c.setAllParameters(1787093, "Yantai" ,  "China" , 37.47649 , 121.44081 , 8); allCities.push_back(c);
        c.setAllParameters(3633009, "Maracaibo" ,  "Venezuela" , 10.66663 , -71.61245 , -4); allCities.push_back(c);
        c.setAllParameters(3469058, "Brasilia" ,  "Brazil" , -15.77972 , -47.92972 , -3); allCities.push_back(c);
        c.setAllParameters(3492908, "Santo Domingo" ,  "Dominican Republic" , 18.47186 , -69.89232 , -4); allCities.push_back(c);
        c.setAllParameters(1856057, "Nagoya" ,  "Japan" , 35.18147 , 136.90641 , 9); allCities.push_back(c);
        c.setAllParameters(3553478, "Havana" ,  "Cuba" , 23.13302 , -82.38304 , -5); allCities.push_back(c);
        c.setAllParameters(1806776, "Huizhou" ,  "China" , 23.11147 , 114.41523 , 8); allCities.push_back(c);
        c.setAllParameters(99071, "Al Mawsil al Jadidah" ,  "Iraq" , 36.33271 , 43.10555 , 3); allCities.push_back(c);
        c.setAllParameters(1809078, "Haikou" ,  "China" , 20.04583 , 110.34167 , 8); allCities.push_back(c);
        c.setAllParameters(1791681, "Weifang" ,  "China" , 36.71 , 119.10194 , 8); allCities.push_back(c);
        c.setAllParameters(1783621, "Zunyi" ,  "China" , 27.68667 , 106.90722 , 8); allCities.push_back(c);
        c.setAllParameters(1819609, "Kowloon" ,  "Hong Kong" , 22.31667 , 114.18333 , 8); allCities.push_back(c);
        c.setAllParameters(388349, "Al Basrah al Qadimah" ,  "Iraq" , 30.50316 , 47.81507 , 3); allCities.push_back(c);
        c.setAllParameters(10859300, "Lianyungang" ,  "China" , 34.59845 , 119.21556 , 8); allCities.push_back(c);
        c.setAllParameters(1526384, "Almaty" ,  "Kazakhstan" , 43.25667 , 76.92861 , 6); allCities.push_back(c);
        c.setAllParameters(3674962, "Medellin" ,  "Colombia" , 6.25184 , -75.56359 , -5); allCities.push_back(c);
        c.setAllParameters(1512569, "Tashkent" ,  "Uzbekistan" , 41.26465 , 69.21627 , 5); allCities.push_back(c);
        c.setAllParameters(2507480, "Algiers" ,  "Algeria" , 36.73225 , 3.08746 , 1); allCities.push_back(c);
        c.setAllParameters(1810638, "Ganzhou" ,  "China" , 25.84664 , 114.9326 , 8); allCities.push_back(c);
        c.setAllParameters(379252, "Khartoum" ,  "Sudan" , 15.55177 , 32.53241 , 2); allCities.push_back(c);
        c.setAllParameters(2306104, "Accra" ,  "Ghana" , 5.55602 , -0.1969 , 0); allCities.push_back(c);
        c.setAllParameters(3657509, "Guayaquil" ,  "Ecuador" , -2.19616 , -79.88621 , -5); allCities.push_back(c);
        c.setAllParameters(8347664, "Ordos" ,  "China" , 39.6086 , 109.78157 , 8); allCities.push_back(c);
        c.setAllParameters(71137, "Sanaa" ,  "Yemen" , 15.35472 , 44.20667 , 3); allCities.push_back(c);
        c.setAllParameters(276781, "Beirut" ,  "Lebanon" , 33.89332 , 35.50157 , 2); allCities.push_back(c);
        c.setAllParameters(1797121, "Jieyang" ,  "China" , 23.5418 , 116.36581 , 8); allCities.push_back(c);
        c.setAllParameters(2128295, "Sapporo" ,  "Japan" , 43.06667 , 141.35 , 9); allCities.push_back(c);
        c.setAllParameters(2036502, "Jilin" ,  "China" , 43.85083 , 126.56028 , 8); allCities.push_back(c);
        c.setAllParameters(683506, "Bucharest" ,  "Romania" , 44.43225 , 26.10626 , 2); allCities.push_back(c);
        c.setAllParameters(2422488, "Camayenne" ,  "Guinea" , 9.535 , -13.68778 , 0); allCities.push_back(c);
        c.setAllParameters(1800146, "Nanchong" ,  "China" , 30.79508 , 106.08473 , 8); allCities.push_back(c);
        c.setAllParameters(1269743, "Indore" ,  "India" , 22.71792 , 75.8333 , 5.5); allCities.push_back(c);
        c.setAllParameters(1253573, "Vadodara" ,  "India" , 22.29941 , 73.20812 , 5.5); allCities.push_back(c);
        c.setAllParameters(3526683, "Iztapalapa" ,  "Mexico" , 19.35529 , -99.06224 , -6); allCities.push_back(c);
        c.setAllParameters(1799629, "Nanyang" ,  "China" , 32.99472 , 112.53278 , 8); allCities.push_back(c);
        c.setAllParameters(1810845, "Fuyang" ,  "China" , 32.9 , 115.81667 , 8); allCities.push_back(c);
        c.setAllParameters(2422465, "Conakry" ,  "Guinea" , 9.53795 , -13.67729 , 0); allCities.push_back(c);
        c.setAllParameters(11838258, "Bayan Nur" ,  "China" , 40.74143 , 107.38599 , 8); allCities.push_back(c);
        c.setAllParameters(3632998, "Maracay" ,  "Venezuela" , 10.23535 , -67.59113 , -4); allCities.push_back(c);
        c.setAllParameters(1214520, "Medan" ,  "Indonesia" , 3.58333 , 98.66667 , 7); allCities.push_back(c);
        c.setAllParameters(1815395, "Chaozhou" ,  "China" , 23.65396 , 116.62262 , 8); allCities.push_back(c);
        c.setAllParameters(1166993, "Rawalpindi" ,  "Pakistan" , 33.59733 , 73.0479 , 5); allCities.push_back(c);
        c.setAllParameters(625144, "Minsk" ,  "Belarus" , 53.9 , 27.56667 , 3); allCities.push_back(c);
        c.setAllParameters(3054643, "Budapest" ,  "Hungary" , 47.49835 , 19.04045 , 1); allCities.push_back(c);
        c.setAllParameters(99072, "Mosul" ,  "Iraq" , 36.335 , 43.11889 , 3); allCities.push_back(c);
        c.setAllParameters(2911298, "Hamburg" ,  "Germany" , 53.55073 , 9.99302 , 1); allCities.push_back(c);
        c.setAllParameters(1797945, "Qingyuan" ,  "China" , 23.7 , 113.03333 , 8); allCities.push_back(c);
        c.setAllParameters(1793724, "Tai'an" ,  "China" , 36.18528 , 117.12 , 8); allCities.push_back(c);
        c.setAllParameters(1795855, "Shaoxing" ,  "China" , 30.00237 , 120.57864 , 8); allCities.push_back(c);
        c.setAllParameters(3464975, "Curitiba" ,  "Brazil" , -25.42778 , -49.27306 , -3); allCities.push_back(c);
        c.setAllParameters(756135, "Warsaw" ,  "Poland" , 52.22977 , 21.01178 , 1); allCities.push_back(c);
        c.setAllParameters(1650357, "Bandung" ,  "Indonesia" , -6.92222 , 107.60694 , 7); allCities.push_back(c);
        c.setAllParameters(953781, "Soweto" ,  "South Africa" , -26.26781 , 27.85849 , 2); allCities.push_back(c);
        c.setAllParameters(2761369, "Vienna" ,  "Austria" , 48.20849 , 16.37208 , 1); allCities.push_back(c);
        c.setAllParameters(12165956, "Kallakurichi" ,  "India" , 11.73379 , 78.95925 , 5.5); allCities.push_back(c);
        c.setAllParameters(1807681, "Huainan" ,  "China" , 32.62639 , 116.99694 , 8); allCities.push_back(c);
        c.setAllParameters(1791236, "Wuhu" ,  "China" , 31.33728 , 118.37351 , 8); allCities.push_back(c);
        c.setAllParameters(2538475, "Rabat" ,  "Morocco" , 34.01325 , -6.83255 , 1); allCities.push_back(c);
        c.setAllParameters(3529612, "Ecatepec de Morelos" ,  "Mexico" , 19.60492 , -99.06064 , -6); allCities.push_back(c);
        c.setAllParameters(1793743, "Suzhou" ,  "China" , 33.63611 , 116.97889 , 8); allCities.push_back(c);
        c.setAllParameters(1802206, "Lu'an" ,  "China" , 31.73561 , 116.51688 , 8); allCities.push_back(c);
        c.setAllParameters(3128760, "Barcelona" ,  "Spain" , 41.38879 , 2.15899 , 1); allCities.push_back(c);
        c.setAllParameters(964137, "Pretoria" ,  "South Africa" , -25.74486 , 28.18783 , 2); allCities.push_back(c);
        c.setAllParameters(1787746, "Yancheng" ,  "China" , 33.3575 , 120.1573 , 8); allCities.push_back(c);
        c.setAllParameters(1784990, "Zhanjiang" ,  "China" , 21.28145 , 110.34271 , 8); allCities.push_back(c);
        c.setAllParameters(1793505, "Taizhou" ,  "China" , 32.49069 , 119.90812 , 8); allCities.push_back(c);
        c.setAllParameters(170063, "Aleppo" ,  "Syria" , 36.20124 , 37.16117 , 2); allCities.push_back(c);
        c.setAllParameters(6077243, "Montreal" ,  "Canada" , 45.50884 , -73.58781 , -5); allCities.push_back(c);
        c.setAllParameters(1701668, "Manila" ,  "Philippines" , 14.6042 , 120.9822 , 8); allCities.push_back(c);
        c.setAllParameters(1260086, "Patna" ,  "India" , 25.59408 , 85.13563 , 5.5); allCities.push_back(c);
        c.setAllParameters(1275841, "Bhopal" ,  "India" , 23.25469 , 77.40289 , 5.5); allCities.push_back(c);
        c.setAllParameters(3663517, "Manaus" ,  "Brazil" , -3.10194 , -60.025 , -4); allCities.push_back(c);
        c.setAllParameters(1813325, "Dazhou" ,  "China" , 31.21592 , 107.50092 , 8); allCities.push_back(c);
        c.setAllParameters(1787227, "Yangzhou" ,  "China" , 32.39722 , 119.43583 , 8); allCities.push_back(c);
        c.setAllParameters(2335727, "Kaduna" ,  "Nigeria" , 10.52641 , 7.43879 , 1); allCities.push_back(c);
        c.setAllParameters(1821306, "Phnom Penh" ,  "Cambodia" , 11.56245 , 104.91601 , 7); allCities.push_back(c);
        c.setAllParameters(1809498, "Guilin" ,  "China" , 25.28022 , 110.29639 , 8); allCities.push_back(c);
        c.setAllParameters(170654, "Damascus" ,  "Syria" , 33.5102 , 36.29128 , 2); allCities.push_back(c);
        c.setAllParameters(4560349, "Philadelphia" ,  "United States" , 39.95233 , -75.16379 , -5); allCities.push_back(c);
        c.setAllParameters(1790437, "Zhuhai" ,  "China" , 22.27694 , 113.56778 , 8); allCities.push_back(c);
        c.setAllParameters(1784853, "Zhaoqing" ,  "China" , 23.04893 , 112.46091 , 8); allCities.push_back(c);
        c.setAllParameters(418863, "Isfahan" ,  "Iran" , 32.65246 , 51.67462 , 3.5); allCities.push_back(c);
        c.setAllParameters(1264728, "Ludhiana" ,  "India" , 30.91204 , 75.85379 , 5.5); allCities.push_back(c);
        c.setAllParameters(890299, "Harare" ,  "Zimbabwe" , -17.82772 , 31.05337 , 2); allCities.push_back(c);
        c.setAllParameters(1783934, "Shangqiu" ,  "China" , 34.45 , 115.65 , 8); allCities.push_back(c);
        c.setAllParameters(1859171, "Kobe" ,  "Japan" , 34.6913 , 135.183 , 9); allCities.push_back(c);
        c.setAllParameters(1649378, "Bekasi" ,  "Indonesia" , -6.2349 , 106.9896 , 7); allCities.push_back(c);
        c.setAllParameters(1673820, "Kaohsiung" ,  "Taiwan" , 22.61626 , 120.31333 , 8); allCities.push_back(c);
        c.setAllParameters(2673730, "Stockholm" ,  "Sweden" , 59.32938 , 18.06871 , 1); allCities.push_back(c);
        c.setAllParameters(1720151, "Caloocan City" ,  "Philippines" , 14.64953 , 120.96788 , 8); allCities.push_back(c);
        c.setAllParameters(4005539, "Guadalajara" ,  "Mexico" , 20.66682 , -103.39182 , -6); allCities.push_back(c);
        c.setAllParameters(1786657, "Yinchuan" ,  "China" , 38.46806 , 106.27306 , 8); allCities.push_back(c);
        c.setAllParameters(5125771, "Manhattan" ,  "United States" , 40.78343 , -73.96625 , -5); allCities.push_back(c);
        c.setAllParameters(3439389, "Asuncion" ,  "Paraguay" , -25.28646 , -57.647 , -3); allCities.push_back(c);
        c.setAllParameters(1806299, "Jiangmen" ,  "China" , 22.58333 , 113.08333 , 8); allCities.push_back(c);
        c.setAllParameters(3390760, "Recife" ,  "Brazil" , -8.05389 , -34.88111 , -3); allCities.push_back(c);
        c.setAllParameters(1835235, "Daejeon" ,  "South Korea" , 36.34913 , 127.38493 , 9); allCities.push_back(c);
        c.setAllParameters(4726206, "San Antonio" ,  "United States" , 29.42412 , -98.49363 , -6); allCities.push_back(c);
        c.setAllParameters(2298890, "Kumasi" ,  "Ghana" , 6.68848 , -1.62443 , 0); allCities.push_back(c);
        c.setAllParameters(1805528, "Jinhua" ,  "China" , 29.10678 , 119.64421 , 8); allCities.push_back(c);
        c.setAllParameters(1736376, "Kota Bharu" ,  "Malaysia" , 6.12361 , 102.24333 , 8); allCities.push_back(c);
        c.setAllParameters(1857910, "Kyoto" ,  "Japan" , 35.02107 , 135.75385 , 9); allCities.push_back(c);
        c.setAllParameters(1791121, "Changde" ,  "China" , 29.03205 , 111.69844 , 8); allCities.push_back(c);
        c.setAllParameters(1735161, "Kuala Lumpur" ,  "Malaysia" , 3.1412 , 101.68653 , 8); allCities.push_back(c);
        c.setAllParameters(1804879, "Kaifeng" ,  "China" , 34.7986 , 114.30742 , 8); allCities.push_back(c);
        c.setAllParameters(128747, "Karaj" ,  "Iran" , 35.83266 , 50.99155 , 3.5); allCities.push_back(c);
        c.setAllParameters(1283240, "Kathmandu" ,  "Nepal" , 27.70169 , 85.3206 , 5.75); allCities.push_back(c);
        c.setAllParameters(1633070, "Palembang" ,  "Indonesia" , -2.91673 , 104.7458 , 7); allCities.push_back(c);
        c.setAllParameters(1793771, "Suqian" ,  "China" , 33.94917 , 118.29583 , 8); allCities.push_back(c);
        c.setAllParameters(1169825, "Multan" ,  "Pakistan" , 30.19679 , 71.47824 , 5); allCities.push_back(c);
        c.setAllParameters(1803300, "Liuzhou" ,  "China" , 24.32405 , 109.40698 , 8); allCities.push_back(c);
        c.setAllParameters(1254361, "Tirunelveli" ,  "India" , 8.72742 , 77.6838 , 5.5); allCities.push_back(c);
        c.setAllParameters(1797353, "Quanzhou" ,  "China" , 24.91389 , 118.58583 , 8); allCities.push_back(c);
        c.setAllParameters(3521081, "Puebla" ,  "Mexico" , 19.03793 , -98.20346 , -6); allCities.push_back(c);
        c.setAllParameters(1581130, "Hanoi" ,  "Vietnam" , 21.0245 , 105.84117 , 7); allCities.push_back(c);
        c.setAllParameters(706483, "Kharkiv" ,  "Ukraine" , 49.98081 , 36.25272 , 2); allCities.push_back(c);
        c.setAllParameters(1279259, "Agra" ,  "India" , 27.18333 , 78.01667 , 5.5); allCities.push_back(c);
        c.setAllParameters(3860259, "Cordoba" ,  "Argentina" , -31.4135 , -64.18105 , -3); allCities.push_back(c);
        c.setAllParameters(113646, "Tabriz" ,  "Iran" , 38.08 , 46.2919 , 3.5); allCities.push_back(c);
        c.setAllParameters(1496747, "Novosibirsk" ,  "Russia" , 55.0415 , 82.9346 , 7); allCities.push_back(c);
        c.setAllParameters(1841811, "Gwangju" ,  "South Korea" , 35.15472 , 126.91556 , 9); allCities.push_back(c);
        c.setAllParameters(750269, "Bursa" ,  "Turkey" , 40.19559 , 29.06013 , 3); allCities.push_back(c);
        c.setAllParameters(1816234, "Bozhou" ,  "China" , 33.87722 , 115.77028 , 8); allCities.push_back(c);
        c.setAllParameters(1797318, "Qujing" ,  "China" , 25.48333 , 103.78333 , 8); allCities.push_back(c);
        c.setAllParameters(3405870, "Belem" ,  "Brazil" , -1.45583 , -48.50444 , -3); allCities.push_back(c);
        c.setAllParameters(2037355, "Fushun" ,  "China" , 41.88669 , 123.94363 , 8); allCities.push_back(c);
        c.setAllParameters(3652462, "Quito" ,  "Ecuador" , -0.22985 , -78.52495 , -5); allCities.push_back(c);
        c.setAllParameters(1863967, "Fukuoka" ,  "Japan" , 33.6 , 130.41667 , 9); allCities.push_back(c);
        c.setAllParameters(1070940, "Antananarivo" ,  "Madagascar" , -18.91368 , 47.53613 , 3); allCities.push_back(c);
        c.setAllParameters(1258847, "Rajkot" ,  "India" , 22.29161 , 70.79322 , 5.5); allCities.push_back(c);
        c.setAllParameters(1801792, "Luoyang" ,  "China" , 34.68361 , 112.45361 , 8); allCities.push_back(c);
        c.setAllParameters(1176734, "Hyderabad" ,  "Pakistan" , 25.39242 , 68.37366 , 5); allCities.push_back(c);
        c.setAllParameters(5110266, "The Bronx" ,  "United States" , 40.84985 , -73.86641 , -5); allCities.push_back(c);
        c.setAllParameters(3625549, "Valencia" ,  "Venezuela" , 10.16202 , -68.00765 , -4); allCities.push_back(c);
        c.setAllParameters(1177662, "Gujranwala" ,  "Pakistan" , 32.15567 , 74.18705 , 5); allCities.push_back(c);
        c.setAllParameters(3689147, "Barranquilla" ,  "Colombia" , 10.96854 , -74.78132 , -5); allCities.push_back(c);
        c.setAllParameters(1802875, "Guankou" ,  "China" , 28.15861 , 113.62709 , 8); allCities.push_back(c);
        c.setAllParameters(922704, "Lubumbashi" ,  "Democratic Republic of the Congo" , -11.66089 , 27.47938 , 2); allCities.push_back(c);
        c.setAllParameters(3452925, "Porto Alegre" ,  "Brazil" , -30.03283 , -51.23019 , -3); allCities.push_back(c);
        c.setAllParameters(1625084, "Tangerang" ,  "Indonesia" , -6.17806 , 106.63 , 7); allCities.push_back(c);
        c.setAllParameters(1262111, "Najafgarh" ,  "India" , 28.60922 , 76.97982 , 5.5); allCities.push_back(c);
        c.setAllParameters(3904906, "Santa Cruz de la Sierra" ,  "Bolivia" , -17.78629 , -63.18117 , -4); allCities.push_back(c);
        c.setAllParameters(1808963, "Handan" ,  "China" , 36.60999 , 114.48764 , 8); allCities.push_back(c);
        c.setAllParameters(1800627, "Mianyang" ,  "China" , 31.46784 , 104.68168 , 8); allCities.push_back(c);
        c.setAllParameters(232422, "Kampala" ,  "Uganda" , 0.31628 , 32.58219 , 3); allCities.push_back(c);
        c.setAllParameters(1786764, "Yichang" ,  "China" , 30.71444 , 111.28472 , 8); allCities.push_back(c);
        c.setAllParameters(1486209, "Yekaterinburg" ,  "Russia" , 56.8519 , 60.6122 , 5); allCities.push_back(c);
        c.setAllParameters(1808198, "Heze" ,  "China" , 35.23929 , 115.47358 , 8); allCities.push_back(c);
        c.setAllParameters(1336135, "Khulna" ,  "Bangladesh" , 22.80979 , 89.56439 , 6); allCities.push_back(c);
        c.setAllParameters(2232593, "Douala" ,  "Cameroon" , 4.04827 , 9.70428 , 1); allCities.push_back(c);
        c.setAllParameters(1270926, "Gorakhpur" ,  "India" , 29.44768 , 75.67206 , 5.5); allCities.push_back(c);
        c.setAllParameters(292672, "Sharjah" ,  "United Arab Emirates" , 25.33737 , 55.41206 , 4); allCities.push_back(c);
        c.setAllParameters(104515, "Mecca" ,  "Saudi Arabia" , 21.42664 , 39.82563 , 3); allCities.push_back(c);
        c.setAllParameters(1622786, "Makassar" ,  "Indonesia" , -5.14861 , 119.43194 , 8); allCities.push_back(c);
        c.setAllParameters(4013708, "Ciudad Juarez" ,  "Mexico" , 31.72024 , -106.46084 , -7); allCities.push_back(c);
        c.setAllParameters(8533133, "Liupanshui" ,  "China" , 26.59444 , 104.83333 , 8); allCities.push_back(c);
        c.setAllParameters(1859642, "Kawasaki" ,  "Japan" , 35.52056 , 139.71722 , 9); allCities.push_back(c);
        c.setAllParameters(8581443, "South Tangerang" ,  "Indonesia" , -6.28862 , 106.71789 , 7); allCities.push_back(c);
        c.setAllParameters(2038432, "Baotou" ,  "China" , 40.6516 , 109.84389 , 8); allCities.push_back(c);
        c.setAllParameters(3981609, "Tijuana" ,  "Mexico" , 32.5027 , -117.00371 , -8); allCities.push_back(c);
        c.setAllParameters(109223, "Medina" ,  "Saudi Arabia" , 24.46861 , 39.61417 , 3); allCities.push_back(c);
        c.setAllParameters(2220957, "Yaounde" ,  "Cameroon" , 3.86667 , 11.51667 , 1); allCities.push_back(c);
        c.setAllParameters(2460596, "Bamako" ,  "Mali" , 12.65 , -8 , 0); allCities.push_back(c);
        c.setAllParameters(1797551, "Qinzhou" ,  "China" , 21.98247 , 108.65061 , 8); allCities.push_back(c);
        c.setAllParameters(1801934, "Luohe" ,  "China" , 33.56394 , 114.04272 , 8); allCities.push_back(c);
        c.setAllParameters(1790587, "Xiangyang" ,  "China" , 32.0422 , 112.14479 , 8); allCities.push_back(c);
        c.setAllParameters(1806408, "Yangjiang" ,  "China" , 21.85563 , 111.96272 , 8); allCities.push_back(c);
        c.setAllParameters(1261731, "Nashik" ,  "India" , 19.99727 , 73.79096 , 5.5); allCities.push_back(c);
        c.setAllParameters(1627896, "Semarang" ,  "Indonesia" , -6.99306 , 110.42083 , 7); allCities.push_back(c);
        c.setAllParameters(2260535, "Brazzaville" ,  "Republic of the Congo" , -4.26613 , 15.28318 , 1); allCities.push_back(c);
        c.setAllParameters(1259652, "Pimpri" ,  "India" , 18.62292 , 73.80696 , 5.5); allCities.push_back(c);
        c.setAllParameters(520555, "Nizhniy Novgorod" ,  "Russia" , 56.32867 , 44.00205 , 3); allCities.push_back(c);
        c.setAllParameters(250441, "Amman" ,  "Jordan" , 31.95522 , 35.94503 , 2); allCities.push_back(c);
        c.setAllParameters(1723510, "Budta" ,  "Philippines" , 7.20417 , 124.43972 , 8); allCities.push_back(c);
        c.setAllParameters(792680, "Belgrade" ,  "Serbia" , 44.80401 , 20.46513 , 1); allCities.push_back(c);
        c.setAllParameters(3441575, "Montevideo" ,  "Uruguay" , -34.90328 , -56.18816 , -3); allCities.push_back(c);
        c.setAllParameters(909137, "Lusaka" ,  "Zambia" , -15.40669 , 28.28713 , 2); allCities.push_back(c);
        c.setAllParameters(1788046, "Xuchang" ,  "China" , 34.03189 , 113.86299 , 8); allCities.push_back(c);
        c.setAllParameters(1268295, "Kalyan" ,  "India" , 19.2437 , 73.13554 , 5.5); allCities.push_back(c);
        c.setAllParameters(1783745, "Zigong" ,  "China" , 29.34162 , 104.77689 , 8); allCities.push_back(c);
        c.setAllParameters(1254661, "Thane" ,  "India" , 19.19704 , 72.96355 , 5.5); allCities.push_back(c);
        c.setAllParameters(2867714, "Munich" ,  "Germany" , 48.13743 , 11.57549 , 1); allCities.push_back(c);
        c.setAllParameters(10630003, "Xuzhou" ,  "China" , 34.20442 , 117.28386 , 8); allCities.push_back(c);
        c.setAllParameters(268743, "Ra's Bayrut" ,  "Lebanon" , 33.9 , 35.48333 , 2); allCities.push_back(c);
        c.setAllParameters(1799491, "Neijiang" ,  "China" , 29.58354 , 105.06216 , 8); allCities.push_back(c);
        c.setAllParameters(115019, "Shiraz" ,  "Iran" , 29.61031 , 52.53113 , 3.5); allCities.push_back(c);
        c.setAllParameters(1808316, "Yiyang" ,  "China" , 28.58917 , 112.32833 , 8); allCities.push_back(c);
        c.setAllParameters(325363, "Adana" ,  "Turkey" , 36.98615 , 35.32531 , 3); allCities.push_back(c);
        c.setAllParameters(1835553, "Suwon" ,  "South Korea" , 37.29111 , 127.00889 , 9); allCities.push_back(c);
        c.setAllParameters(1805518, "Jining" ,  "China" , 35.405 , 116.58139 , 8); allCities.push_back(c);
        c.setAllParameters(3998655, "Leon de los Aldama" ,  "Mexico" , 21.12908 , -101.67374 , -6); allCities.push_back(c);
        c.setAllParameters(3173435, "Milan" ,  "Italy" , 45.46427 , 9.18951 , 1); allCities.push_back(c);
        c.setAllParameters(3718426, "Port-au-Prince" ,  "Haiti" , 18.54349 , -72.33881 , -5); allCities.push_back(c);
        c.setAllParameters(1788534, "Xinyang" ,  "China" , 32.12278 , 114.06556 , 8); allCities.push_back(c);
        c.setAllParameters(1803834, "Liaocheng" ,  "China" , 36.45064 , 116.00247 , 8); allCities.push_back(c);
        c.setAllParameters(10942283, "Jinzhong" ,  "China" , 37.68403 , 112.75471 , 8); allCities.push_back(c);
        c.setAllParameters(2078025, "Adelaide" ,  "Australia" , -34.92866 , 138.59863 , 10.5); allCities.push_back(c);
        c.setAllParameters(1263214, "Meerut" ,  "India" , 28.98002 , 77.70636 , 5.5); allCities.push_back(c);
        c.setAllParameters(1261162, "Nowrangapur" ,  "India" , 19.23114 , 82.54826 , 5.5); allCities.push_back(c);
        c.setAllParameters(1271951, "Faridabad" ,  "India" , 28.41124 , 77.31316 , 5.5); allCities.push_back(c);
        c.setAllParameters(1168197, "Peshawar" ,  "Pakistan" , 34.008 , 71.57849 , 5); allCities.push_back(c);
        c.setAllParameters(1808956, "Changzhi" ,  "China" , 36.18389 , 113.10528 , 8); allCities.push_back(c);
        c.setAllParameters(1792892, "Tianshui" ,  "China" , 34.57952 , 105.74238 , 8); allCities.push_back(c);
        c.setAllParameters(1715348, "Davao" ,  "Philippines" , 7.07306 , 125.61278 , 8); allCities.push_back(c);
        c.setAllParameters(1311874, "Mandalay" ,  "Myanmar" , 21.97473 , 96.08359 , 6.5); allCities.push_back(c);
        c.setAllParameters(3492914, "Santiago de los Caballeros" ,  "Dominican Republic" , 19.4517 , -70.69703 , -4); allCities.push_back(c);
        c.setAllParameters(365137, "Omdurman" ,  "Sudan" , 15.64453 , 32.47773 , 2); allCities.push_back(c);
        c.setAllParameters(2038632, "Anshan" ,  "China" , 41.12361 , 122.99 , 8); allCities.push_back(c);
        c.setAllParameters(1271308, "Ghaziabad" ,  "India" , 28.66535 , 77.43915 , 5.5); allCities.push_back(c);
        c.setAllParameters(1645524, "Depok" ,  "Indonesia" , -6.4 , 106.81861 , 7); allCities.push_back(c);
        c.setAllParameters(6940394, "Saitama" ,  "Japan" , 35.90807 , 139.65657 , 9); allCities.push_back(c);
        c.setAllParameters(1272423, "Dombivli" ,  "India" , 19.21667 , 73.08333 , 5.5); allCities.push_back(c);
        c.setAllParameters(1040652, "Maputo" ,  "Mozambique" , -25.96553 , 32.58322 , 2); allCities.push_back(c);
        c.setAllParameters(8400694, "Taizhou" ,  "China" , 28.66266 , 121.43312 , 8); allCities.push_back(c);
        c.setAllParameters(3514674, "Gustavo Adolfo Madero" ,  "Mexico" , 19.49392 , -99.11075 , -6); allCities.push_back(c);
        c.setAllParameters(3838583, "Rosario" ,  "Argentina" , -32.94682 , -60.63932 , -3); allCities.push_back(c);
        c.setAllParameters(1797658, "Jinjiang" ,  "China" , 24.81978 , 118.57415 , 8); allCities.push_back(c);
        c.setAllParameters(3462377, "Goiania" ,  "Brazil" , -16.67861 , -49.25389 , -3); allCities.push_back(c);
        c.setAllParameters(3461786, "Guarulhos" ,  "Brazil" , -23.46278 , -46.53333 , -3); allCities.push_back(c);
        c.setAllParameters(3067696, "Prague" ,  "Czech Republic" , 50.08804 , 14.42076 , 1); allCities.push_back(c);
        c.setAllParameters(1253405, "Varanasi" ,  "India" , 25.31668 , 83.01041 , 5.5); allCities.push_back(c);
        c.setAllParameters(6295587, "Batam" ,  "Indonesia" , 1.14937 , 104.02491 , 7); allCities.push_back(c);
        c.setAllParameters(1805179, "Jiujiang" ,  "China" , 29.70475 , 116.00206 , 8); allCities.push_back(c);
        c.setAllParameters(2618425, "Copenhagen" ,  "Denmark" , 55.67594 , 12.56553 , 1); allCities.push_back(c);
        c.setAllParameters(727011, "Sofia" ,  "Bulgaria" , 42.69751 , 23.32415 , 2); allCities.push_back(c);
        c.setAllParameters(2210247, "Tripoli" ,  "Libya" , 32.88743 , 13.18733 , 2); allCities.push_back(c);
        c.setAllParameters(2324774, "Port Harcourt" ,  "Nigeria" , 4.77742 , 7.0134 , 1); allCities.push_back(c);
        c.setAllParameters(1785294, "Anyang" ,  "China" , 36.096 , 114.38278 , 8); allCities.push_back(c);
        c.setAllParameters(1862415, "Hiroshima" ,  "Japan" , 34.4 , 132.45 , 9); allCities.push_back(c);
        c.setAllParameters(3979770, "Zapopan" ,  "Mexico" , 20.72356 , -103.38479 , -6); allCities.push_back(c);
        c.setAllParameters(1816373, "Bijie" ,  "China" , 27.30193 , 105.28627 , 8); allCities.push_back(c);
        c.setAllParameters(3995465, "Monterrey" ,  "Mexico" , 25.67507 , -100.31847 , -6); allCities.push_back(c);
        c.setAllParameters(499099, "Samara" ,  "Russia" , 53.20007 , 50.15 , 4); allCities.push_back(c);
        c.setAllParameters(1783763, "Zhuzhou" ,  "China" , 27.83333 , 113.15 , 8); allCities.push_back(c);
        c.setAllParameters(1496153, "Omsk" ,  "Russia" , 54.99244 , 73.36859 , 6); allCities.push_back(c);
        c.setAllParameters(2347283, "Benin City" ,  "Nigeria" , 6.33815 , 5.62575 , 1); allCities.push_back(c);
        c.setAllParameters(1978681, "Malingao" ,  "Philippines" , 7.16083 , 124.475 , 8); allCities.push_back(c);
        c.setAllParameters(1785623, "Kunshan" ,  "China" , 31.37762 , 120.95431 , 8); allCities.push_back(c);
        c.setAllParameters(587084, "Baku" ,  "Azerbaijan" , 40.37767 , 49.89201 , 4); allCities.push_back(c);
        c.setAllParameters(1787858, "Shangrao" ,  "China" , 28.45179 , 117.94287 , 8); allCities.push_back(c);
        c.setAllParameters(1807700, "Huaibei" ,  "China" , 33.97444 , 116.79167 , 8); allCities.push_back(c);
        c.setAllParameters(2331447, "Maiduguri" ,  "Nigeria" , 11.84692 , 13.15712 , 1); allCities.push_back(c);
        c.setAllParameters(1800818, "Meishan" ,  "China" , 30.04392 , 103.83696 , 8); allCities.push_back(c);
        c.setAllParameters(1798449, "Putian" ,  "China" , 25.43944 , 119.01028 , 8); allCities.push_back(c);
        c.setAllParameters(551487, "Kazan" ,  "Russia" , 55.78874 , 49.12214 , 3); allCities.push_back(c);
        c.setAllParameters(3530589, "Ciudad Nezahualcoyotl" ,  "Mexico" , 19.40061 , -99.01483 , -6); allCities.push_back(c);
        c.setAllParameters(616052, "Yerevan" ,  "Armenia" , 40.18111 , 44.51361 , 4); allCities.push_back(c);
        c.setAllParameters(1278710, "Amritsar" ,  "India" , 31.62234 , 74.87534 , 5.5); allCities.push_back(c);
        c.setAllParameters(1810820, "Fuzhou" ,  "China" , 27.95999 , 116.33333 , 8); allCities.push_back(c);
        c.setAllParameters(2357048, "Ouagadougou" ,  "Burkina Faso" , 12.36566 , -1.53388 , 0); allCities.push_back(c);
        c.setAllParameters(1809532, "Guigang" ,  "China" , 23.11603 , 109.59472 , 8); allCities.push_back(c);
        c.setAllParameters(1808370, "Hengyang" ,  "China" , 26.88946 , 112.61888 , 8); allCities.push_back(c);
        c.setAllParameters(501175, "Rostov-na-Donu" ,  "Russia" , 47.23135 , 39.72328 , 3); allCities.push_back(c);
        c.setAllParameters(1278994, "Allahabad" ,  "India" , 25.44478 , 81.84322 , 5.5); allCities.push_back(c);
        c.setAllParameters(1842485, "Goyang-si" ,  "South Korea" , 37.65639 , 126.835 , 9); allCities.push_back(c);
        c.setAllParameters(314830, "Gaziantep" ,  "Turkey" , 37.05944 , 37.3825 , 3); allCities.push_back(c);
        c.setAllParameters(1253102, "Visakhapatnam" ,  "India" , 17.68009 , 83.20161 , 5.5); allCities.push_back(c);
        c.setAllParameters(2111149, "Sendai" ,  "Japan" , 38.26667 , 140.86667 , 9); allCities.push_back(c);
        c.setAllParameters(1508291, "Chelyabinsk" ,  "Russia" , 55.15402 , 61.42915 , 5); allCities.push_back(c);
        c.setAllParameters(1806602, "Cixi" ,  "China" , 30.1764 , 121.2457 , 8); allCities.push_back(c);
        c.setAllParameters(1785781, "Yulin" ,  "China" , 22.6305 , 110.14686 , 8); allCities.push_back(c);
        c.setAllParameters(2037799, "Datong" ,  "China" , 40.09361 , 113.29139 , 8); allCities.push_back(c);
        c.setAllParameters(1805540, "Jingzhou" ,  "China" , 30.35028 , 112.19028 , 8); allCities.push_back(c);
        c.setAllParameters(611717, "Tbilisi" ,  "Georgia" , 41.69411 , 44.83368 , 4); allCities.push_back(c);
        c.setAllParameters(7283386, "Changshu" ,  "China" , 31.64615 , 120.74221 , 8); allCities.push_back(c);
        c.setAllParameters(12358615, "Xinxiang" ,  "China" , 35.30621 , 113.92572 , 8); allCities.push_back(c);
        c.setAllParameters(1786746, "Yichun" ,  "China" , 27.83333 , 114.4 , 8); allCities.push_back(c);
        c.setAllParameters(1668399, "Taichung" ,  "Taiwan" , 24.1469 , 120.6839 , 8); allCities.push_back(c);
        c.setAllParameters(1254745, "Teni" ,  "India" , 10.01115 , 77.47772 , 5.5); allCities.push_back(c);
        c.setAllParameters(1790353, "Xianyang" ,  "China" , 34.33778 , 108.70261 , 8); allCities.push_back(c);
        c.setAllParameters(479561, "Ufa" ,  "Russia" , 54.74306 , 55.96779 , 5); allCities.push_back(c);
        c.setAllParameters(1897000, "Seongnam-si" ,  "South Korea" , 37.43861 , 127.13778 , 9); allCities.push_back(c);
        c.setAllParameters(3467865, "Campinas" ,  "Brazil" , -22.90556 , -47.06083 , -3); allCities.push_back(c);
        c.setAllParameters(1269633, "Jabalpur" ,  "India" , 23.16697 , 79.95006 , 5.5); allCities.push_back(c);
        c.setAllParameters(1795874, "Shaoguan" ,  "China" , 24.8 , 113.58333 , 8); allCities.push_back(c);
        c.setAllParameters(1270396, "Haora" ,  "India" , 22.57688 , 88.31857 , 5.5); allCities.push_back(c);
        c.setAllParameters(1802276, "Longyan" ,  "China" , 25.07485 , 117.01775 , 8); allCities.push_back(c);
        c.setAllParameters(709717, "Donetsk" ,  "Ukraine" , 48.023 , 37.80224 , 2); allCities.push_back(c);
        c.setAllParameters(2964574, "Dublin" ,  "Ireland" , 53.33306 , -6.24889 , 0); allCities.push_back(c);
        c.setAllParameters(1786217, "Yongzhou" ,  "China" , 26.42389 , 111.61306 , 8); allCities.push_back(c);
        c.setAllParameters(5913490, "Calgary" ,  "Canada" , 51.05011 , -114.08529 , -7); allCities.push_back(c);
        c.setAllParameters(2800866, "Brussels" ,  "Belgium" , 50.85045 , 4.34878 , 1); allCities.push_back(c);
        c.setAllParameters(1278149, "Aurangabad" ,  "India" , 19.87757 , 75.34226 , 5.5); allCities.push_back(c);
        c.setAllParameters(1806535, "Huzhou" ,  "China" , 30.8703 , 120.0933 , 8); allCities.push_back(c);
        c.setAllParameters(1815251, "Jiangyin" ,  "China" , 31.91102 , 120.26302 , 8); allCities.push_back(c);
        c.setAllParameters(698740, "Odessa" ,  "Ukraine" , 46.48572 , 30.74383 , 2); allCities.push_back(c);
        c.setAllParameters(472757, "Volgograd" ,  "Russia" , 48.71939 , 44.50183 , 3); allCities.push_back(c);
        c.setAllParameters(1808857, "Hanzhong" ,  "China" , 33.07507 , 107.02214 , 8); allCities.push_back(c);
        c.setAllParameters(7576887, "Hezhou" ,  "China" , 24.40357 , 111.56675 , 8); allCities.push_back(c);
        c.setAllParameters(3456160, "Nova Iguacu" ,  "Brazil" , -22.75917 , -43.45111 , -3); allCities.push_back(c);
        c.setAllParameters(7602670, "Zhu Cheng City" ,  "China" , 35.99502 , 119.40259 , 8); allCities.push_back(c);
        c.setAllParameters(6943660, "Shivaji Nagar" ,  "India" , 18.53017 , 73.85263 , 5.5); allCities.push_back(c);
        c.setAllParameters(1812101, "Dongying" ,  "China" , 37.46271 , 118.49165 , 8); allCities.push_back(c);
        c.setAllParameters(1801640, "Luzhou" ,  "China" , 28.8903 , 105.42575 , 8); allCities.push_back(c);
        c.setAllParameters(709930, "Dnipro" ,  "Ukraine" , 48.46664 , 35.04066 , 2); allCities.push_back(c);
        c.setAllParameters(1859307, "Kitakyushu" ,  "Japan" , 33.85181 , 130.85034 , 9); allCities.push_back(c);
        c.setAllParameters(1256436, "Solapur" ,  "India" , 17.67152 , 75.91044 , 5.5); allCities.push_back(c);
        c.setAllParameters(3598132, "Guatemala City" ,  "Guatemala" , 14.64072 , -90.51327 , -6); allCities.push_back(c);
        c.setAllParameters(1800779, "Meizhou" ,  "China" , 24.28859 , 116.11768 , 8); allCities.push_back(c);
        c.setAllParameters(1927639, "Yueyang" ,  "China" , 29.37455 , 113.09481 , 8); allCities.push_back(c);
        c.setAllParameters(1804591, "Laiwu" ,  "China" , 36.19278 , 117.65694 , 8); allCities.push_back(c);
        c.setAllParameters(2038300, "Benxi" ,  "China" , 41.28861 , 123.765 , 8); allCities.push_back(c);
        c.setAllParameters(2655603, "Birmingham" ,  "United Kingdom" , 52.48142 , -1.89983 , 0); allCities.push_back(c);
        c.setAllParameters(511196, "Perm" ,  "Russia" , 58.01046 , 56.25017 , 5); allCities.push_back(c);
        c.setAllParameters(1798827, "Pingdingshan" ,  "China" , 33.73847 , 113.30119 , 8); allCities.push_back(c);
        c.setAllParameters(1255634, "Srinagar" ,  "India" , 34.08565 , 74.80555 , 5.5); allCities.push_back(c);
        c.setAllParameters(3617763, "Managua" ,  "Nicaragua" , 12.13282 , -86.2504 , -6); allCities.push_back(c);
        c.setAllParameters(1816440, "Bengbu" ,  "China" , 32.94083 , 117.36083 , 8); allCities.push_back(c);
        c.setAllParameters(964420, "Port Elizabeth" ,  "South Africa" , -33.96109 , 25.61494 , 2); allCities.push_back(c);
        c.setAllParameters(2548885, "Fes" ,  "Morocco" , 34.03313 , -5.00028 , 1); allCities.push_back(c);
        c.setAllParameters(2886242, "Koeln" ,  "Germany" , 50.93333 , 6.95 , 1); allCities.push_back(c);
        c.setAllParameters(1833747, "Ulsan" ,  "South Korea" , 35.53722 , 129.31667 , 9); allCities.push_back(c);
        c.setAllParameters(1274746, "Chandigarh" ,  "India" , 30.73629 , 76.7884 , 5.5); allCities.push_back(c);
        c.setAllParameters(1273865, "Coimbatore" ,  "India" , 11.00555 , 76.96612 , 5.5); allCities.push_back(c);
        c.setAllParameters(3172394, "Naples" ,  "Italy" , 40.85216 , 14.26811 , 1); allCities.push_back(c);
        c.setAllParameters(1790492, "Xiangtan" ,  "China" , 27.85 , 112.9 , 8); allCities.push_back(c);
        c.setAllParameters(1803567, "Linfen" ,  "China" , 36.08889 , 111.51889 , 8); allCities.push_back(c);
        c.setAllParameters(3395981, "Maceio" ,  "Brazil" , -9.66583 , -35.73528 , -3); allCities.push_back(c);
        c.setAllParameters(3687238, "Cartagena" ,  "Colombia" , 10.39972 , -75.51444 , -5); allCities.push_back(c);
        c.setAllParameters(1784642, "Zhenjiang" ,  "China" , 32.21086 , 119.45508 , 8); allCities.push_back(c);
        c.setAllParameters(101760, "Sultanah" ,  "Saudi Arabia" , 24.49258 , 39.58572 , 3); allCities.push_back(c);
        c.setAllParameters(2274895, "Monrovia" ,  "Liberia" , 6.30054 , -10.7969 , 0); allCities.push_back(c);
        c.setAllParameters(3489854, "Kingston" ,  "Jamaica" , 17.99702 , -76.79358 , -5); allCities.push_back(c);
        c.setAllParameters(1281673, "Baoshan" ,  "China" , 25.11626 , 99.16366 , 8); allCities.push_back(c);
        c.setAllParameters(95446, "Erbil" ,  "Iraq" , 36.18333 , 44.01193 , 3); allCities.push_back(c);
        c.setAllParameters(4671654, "Austin" ,  "United States" , 30.26715 , -97.74306 , -6); allCities.push_back(c);
        c.setAllParameters(1797063, "Rui'an" ,  "China" , 27.77605 , 120.65859 , 8); allCities.push_back(c);
        c.setAllParameters(1502026, "Krasnoyarsk" ,  "Russia" , 56.01839 , 92.86717 , 7); allCities.push_back(c);
        c.setAllParameters(6611854, "Nay Pyi Taw" ,  "Myanmar" , 19.745 , 96.12972 , 6.5); allCities.push_back(c);
        c.setAllParameters(1268865, "Jodhpur" ,  "India" , 26.26841 , 73.00594 , 5.5); allCities.push_back(c);
        c.setAllParameters(2113015, "Chiba" ,  "Japan" , 35.6 , 140.11667 , 9); allCities.push_back(c);
        c.setAllParameters(3388368, "Sao Luis" ,  "Brazil" , -2.52972 , -44.30278 , -3); allCities.push_back(c);
        c.setAllParameters(1804609, "Laibin" ,  "China" , 23.74743 , 109.22222 , 8); allCities.push_back(c);
        c.setAllParameters(1264521, "Madurai" ,  "India" , 9.919 , 78.11953 , 5.5); allCities.push_back(c);
        c.setAllParameters(1790254, "Xiaogan" ,  "China" , 30.92689 , 113.92221 , 8); allCities.push_back(c);
        c.setAllParameters(1783683, "Ziyang" ,  "China" , 30.12108 , 104.64811 , 8); allCities.push_back(c);
        c.setAllParameters(2537763, "Sale" ,  "Morocco" , 34.0531 , -6.79846 , 1); allCities.push_back(c);
        c.setAllParameters(1797264, "Quzhou" ,  "China" , 28.95944 , 118.86861 , 8); allCities.push_back(c);
        c.setAllParameters(3919968, "Cochabamba" ,  "Bolivia" , -17.3895 , -66.1568 , -4); allCities.push_back(c);
        c.setAllParameters(2293521, "Abobo" ,  "Ivory Coast" , 5.41613 , -4.0159 , 0); allCities.push_back(c);
        c.setAllParameters(100077, "Abu Ghurayb" ,  "Iraq" , 33.30563 , 44.18477 , 3); allCities.push_back(c);
        c.setAllParameters(119208, "Qom" ,  "Iran" , 34.6401 , 50.8764 , 3.5); allCities.push_back(c);
        c.setAllParameters(1528675, "Bishkek" ,  "Kyrgyzstan" , 42.87 , 74.59 , 6); allCities.push_back(c);
        c.setAllParameters(1785453, "Zaozhuang" ,  "China" , 34.86472 , 117.55417 , 8); allCities.push_back(c);
        c.setAllParameters(1271476, "Guwahati" ,  "India" , 26.1844 , 91.7458 , 5.5); allCities.push_back(c);
        c.setAllParameters(2353151, "Aba" ,  "Nigeria" , 5.10658 , 7.36667 , 1); allCities.push_back(c);
        c.setAllParameters(1798654, "Pingxiang" ,  "China" , 27.61672 , 113.85353 , 8); allCities.push_back(c);
        c.setAllParameters(1886762, "Zhoushan" ,  "China" , 29.98869 , 122.20488 , 8); allCities.push_back(c);
        c.setAllParameters(1270583, "Gwalior" ,  "India" , 26.22983 , 78.17337 , 5.5); allCities.push_back(c);
        c.setAllParameters(2035265, "Qiqihar" ,  "China" , 47.34088 , 123.96045 , 8); allCities.push_back(c);
        c.setAllParameters(1732905, "Klang" ,  "Malaysia" , 3.03667 , 101.44333 , 8); allCities.push_back(c);
        c.setAllParameters(1814870, "Yiwu" ,  "China" , 29.31506 , 120.07676 , 8); allCities.push_back(c);
        c.setAllParameters(1791636, "Weinan" ,  "China" , 34.50355 , 109.50891 , 8); allCities.push_back(c);
        c.setAllParameters(3844421, "Mendoza" ,  "Argentina" , -32.89084 , -68.82717 , -3); allCities.push_back(c);
        c.setAllParameters(306571, "Konya" ,  "Turkey" , 37.87135 , 32.48464 , 3); allCities.push_back(c);


        // sort the cities in the collection
        std::sort(allCities.begin(), allCities.end(), [](const City& lhs, const City& rhs) {return  lhs.cityName < rhs.cityName;});


    }

    std::string Cities::debugString()
    {
        std::string s;

        s =  "\n\nShow All Cities In Collection.\n";
        s = s +  "City Count: " + std::to_string( allCities.size());

        auto iter = allCities.begin();

        for (; iter != allCities.end(); iter++)
        {
          s = s +   (*iter).debugString();
        }
        s = s +  "\n";
    }


    std::vector<std::string> Cities::getDistinctCountries()
    {
        std::vector<std::string> r;
        auto iter = allCities.begin();

        for (; iter != allCities.end(); iter++)
        {
            std::string c;

            c = (*iter).countryName;
            if (std::find(r.begin(), r.end(), c) == r.end())
            {
                r.push_back(c);
            }
        }
        std::sort(r.begin(),r.end());
        return r;
    };


    std::vector<City> Cities::getCitiesForCountry(std::string p_countryName)
    {
        std::vector<City> r;
        auto iter = allCities.begin();

        for (; iter != allCities.end(); iter++)
        {
            std::string c;
            c = (*iter).countryName;

            // only copy country match cities to output vector
            if (c == p_countryName)
            {
                r.push_back(*iter);
            }
        }

        std::sort(r.begin(), r.end(), [](const City& lhs, const City& rhs) {return  lhs.cityName < rhs.cityName;});

        return r;
    }

    City Cities::getCityByID(int p_cityId)
    {
        City r;

        for (unsigned int i = 0; i < allCities.size(); i++)
        {
            if (allCities[i].cityId == p_cityId)
            {
                return allCities[i];
            }
        }
        return r;
    }


    City Cities::getCityByName(std::string p_cityName)
    {
        City r;

        for (unsigned int i = 0; i < allCities.size(); i++)
        {
            if (allCities[i].cityName == p_cityName)
            {
                return allCities[i];
            }
        }
        return r;

    }



