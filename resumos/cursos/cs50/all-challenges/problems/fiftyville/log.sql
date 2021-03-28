-- Keep a log of any SQL queries you execute as you solve the mystery.

-- Who the thief is?
-- Where the thief escaped to?
-- Who the thief's accompliance was, who helped him to escape the town?

-- What I know: Theft took place on July 28 and Theft took place on Chamberlin Street

-- Maintain a list of suspects

/*
Theft occur at 10:15am

Suspect license plates:
5P2BI95
94KL13X
6P58WS2
4328GD8
G412CB7
L93JTIZ
322W7JE
0NTHK55

Interviews: Eugene - Raymond - Ruth

ATM Numbers and values:
ammount | account
48 | 28500762
20 | 28296815
60 | 76054385
50 | 49610011
80 | 16153065
20 | 25506511
30 | 81061156
35 | 26013199

Callers:

caller | receiver | duration
(130) 555-0289 | (996) 555-8899 | 51
(499) 555-9472 | (892) 555-8872 | 36
(367) 555-5533 | (375) 555-8161 | 45
(499) 555-9472 | (717) 555-1342 | 50
(286) 555-6063 | (676) 555-6554 | 43
(770) 555-1861 | (725) 555-3243 | 49
(031) 555-6622 | (910) 555-3251 | 38
(826) 555-1652 | (066) 555-9701 | 55
(338) 555-6650 | (704) 555-2131 | 54

Doris | (066) 555-9701 | M51FA04
Roger | (130) 555-0289 | G412CB7 - Thief
Ernest | (367) 555-5533 | 94KL13X - Thief
Evelyn | (499) 555-9472 | 0NTHK55 - Thief
Danielle | (389) 555-5198 | 4328GD8 - Thief

Ernest | (367) 555-5533 | 94KL13X | 49610011 - SACOU 50 - Thief
Bobby | (826) 555-1652 | 30G67EN | 28296815 - sacou 20

Ernest | (367) 555-5533 | 94KL13X | 49610011 - SACOU 50 - Thief
Berthold | (375) 555-8161 | 4V16VO0 - ACCOMPLICE

Doris | (066) 555-9701 | M51FA04

Danielle | (389) 555-5198 | 4328GD8 | 28500762 - sacou 48
Madison | (286) 555-6063 | 1106N58 | 76054385

Flight

37 | Fiftyville Regional Airport | 7 | 37

I can compare amount withdrawed with airport ticket price

*/

-- Get first information following first tips
SELECT description FROM crime_scene_reports WHERE day = 28 AND month = 7 AND street = "Chamberlin Street";

-- Look into interviews from tribunal mention in desired day/month
SELECT name, transcript FROM interviews WHERE transcript LIKE "%courthouse%" AND day = 28 AND month = 7;

-- Based on interview Ruth courthouse parking ten minutes of the theft (10:25)
SELECT license_plate FROM courthouse_security_logs WHERE day = 28 AND month = 7 AND hour = 10 AND minute > 10 AND minute < 30 AND activity = "exit";

-- Based on interview Eugene ATM on Fifer Street before 10:15
SELECT amount, account_number FROM atm_transactions WHERE day = 28 AND month = 7 AND transaction_type = "withdraw" AND atm_location = "Fifer Street";

-- Based on interview Raymond call less than 1 minute after 10:15

SELECT caller, receiver, duration FROM phone_calls WHERE day = 28 AND month = 7 AND duration < 60;

-- Based on interview Raymond earliest flight out of Fiftyville tomorrow (29/7)

SELECT flights.id, airports.full_name, flights.hour, flights.minute FROM airports JOIN flights ON origin_airport_id = airports.id WHERE flights.day = 29 AND flights.month = 7 AND airports.city = "Fiftyville" ORDER BY flights.hour, flights.minute ASC LIMIT 1;

-- Get all passengers from flight 36
SELECT * FROM passengers WHERE flight_id = 36;

-- Escape Flight To

SELECT airports.city FROM airports JOIN flights ON flights.id = 36 WHERE airports.id = flights.destination_airport_id;

-- Get info from all passenger in that flight
SELECT people.name, people.phone_number, people.license_plate, bank_accounts.account_number FROM people JOIN bank_accounts ON bank_accounts.person_id = people.id JOIN passengers ON passengers.passport_number = people.passport_number WHERE flight_id = 36;

-- Found receiver caller from suspects
SELECT people.name, people.phone_number, people.license_plate FROM people WHERE people.phone_number = "(375) 555-8161" OR people.phone_number = "(066) 555-9701";

