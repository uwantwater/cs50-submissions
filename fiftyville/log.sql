-- Keep a log of any SQL queries you execute as you solve the mystery.
SELECT * FROM crime_scene_reports WHERE year=2021 AND month=7 AND day=28; --to get more details of the crime
SELECT * FROM interviews WHERE year=2021 AND month=7 AND day=28; --to review the interviews for clues
SELECT * FROM bakery_security_logs WHERE year=2021 AND month=7 AND day=28 AND hour=10 AND minute BETWEEN 15 AND 25; --first witness mentions car leaving within 10 minutes after theft
SELECT name, passport_number FROM people WHERE license_plate IN (SELECT license_plate FROM bakery_security_logs WHERE year=2021 AND month=7 AND day=28 AND hour=10 AND minute BETWEEN 15 AND 25); --suspects1
SELECT id, name FROM people WHERE id IN (SELECT person_id FROM bank_accounts JOIN atm_transactions ON bank_accounts.account_number=atm_transactions.account_number WHERE year=2021 AND transaction_type="withdraw"); --suspects2
