SELECT name
FROM people AS people
JOIN stars AS stars ON people.id = stars.person_id
JOIN movies AS movies ON movies.id = stars.movie_id
WHERE movies.year = 2004
ORDER BY people.birth ASC;