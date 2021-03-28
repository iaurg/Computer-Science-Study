SELECT name
FROM people AS people
JOIN stars AS stars ON people.id = stars.person_id
JOIN movies AS movies ON movie_id = movies.id
WHERE title = "Toy Story";