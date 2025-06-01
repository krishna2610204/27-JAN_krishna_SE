CREATE DATABASE courses;

USE courses;

CREATE TABLE courses (
    course_id INT AUTO_INCREMENT PRIMARY KEY,
    course_name VARCHAR(100),
    course_duration INT
);

INSERT INTO courses (course_name, course_duration)
VALUES ('Mathematics', 6),
       ('Physics', 5),
       ('Chemistry', 4);

UPDATE courses
SET course_duration = 8
WHERE course_name = 'Mathematics';

DELETE FROM courses
WHERE course_id = 2;
