-- Lab 1: Insert rows and commit
START TRANSACTION;

INSERT INTO courses (course_name, course_duration) VALUES
('Biology', 5),
('English', 4);

COMMIT;

-- Lab 2: Insert additional rows and rollback
START TRANSACTION;

INSERT INTO courses (course_name, course_duration) VALUES
('History', 3),
('Geography', 4);

ROLLBACK;

-- Lab 3: Use SAVEPOINT to rollback specific changes
START TRANSACTION;

SAVEPOINT before_update;

UPDATE courses
SET course_duration = 7
WHERE course_name = 'Biology';

-- Rollback to savepoint to undo the update but keep prior changes
ROLLBACK TO SAVEPOINT before_update;

COMMIT;
