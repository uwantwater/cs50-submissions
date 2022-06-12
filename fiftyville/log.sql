-- Keep a log of any SQL queries you execute as you solve the mystery.
SELECT * FROM crime_scene_reports WHERE year=2021 AND month=7 AND day=28; --to get more details of the crime
SELECT * FROM interviews WHERE year=2021 AND month=7 AND day=28; --to review the interviews for clues
SELECT * FROM bakery_security_logs WHERE year=2021 AND month=7 AND day=28 AND hour=10 AND minute BETWEEN 15 AND 25; --first witness mentions car leaving 10 minutes after theft
