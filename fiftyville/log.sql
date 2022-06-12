-- Keep a log of any SQL queries you execute as you solve the mystery.
SELECT * FROM crime_scene_reports WHERE year=2021 AND month=7 AND day=28; --to get more details of the crime
SELECT * FROM interviews WHERE year=2021 AND month=7 AND day=28; --to review the interviews for clues
SELECT * FROM bakery_security_logs WHERE year=2021 AND month=7 AND day=28 AND hour=10 AND minute BETWEEN 15 AND 25; --first witness mentions car leaving within 10 minutes after theft
SELECT name, passport_number FROM people WHERE license_plate IN (SELECT license_plate FROM bakery_security_logs WHERE year=2021 AND month=7 AND day=28 AND hour=10 AND minute BETWEEN 15 AND 25); --suspects1
SELECT id, name FROM people WHERE id IN (SELECT person_id FROM bank_accounts JOIN atm_transactions ON bank_accounts.account_number=atm_transactions.account_number WHERE year=2021 AND transaction_type="withdraw"); --suspects2
SELECT id, name, passport_number FROM people WHERE phone_number IN (SELECT phone_number FROM phone_calls WHERE year=2021 AND month=7 AND day=28 AND duration<60) ORDER BY name; --sus people bahahhaajajaj
SELECT * FROM airports WHERE city="Fiftyville"; --to get id of fiftyville airport
SELECT id, name, passport_number FROM people WHERE passport_number IN (SELECT passport_number FROM passengers JOIN flights on flights.id=passengers.flight_id WHERE year=2021 AND month=7 AND day=29 AND origin_airport_id=8) ORDER BY name; --sus people amog us 4 :(
SELECT id FROM flights WHERE year=2021 AND month=7 AND day=29 AND origin_airport_id=8 LIMIT 1; --first flight out of fiftyville