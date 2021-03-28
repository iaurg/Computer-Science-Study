SELECT name
FROM people AS people
JOIN directors AS directors ON people.id = directors.person_id
JOIN movies AS movies ON movies.id = directors.movie_id
JOIN ratings AS ratings ON ratings.movie_id = movies.id
WHERE ratings.rating >= 9.0;