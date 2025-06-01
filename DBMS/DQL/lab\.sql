
SELECT * FROM courses;

-- Sort courses by course_duration in descending order
SELECT * FROM courses
ORDER BY course_duration DESC;

-- Show only the top two courses by course_duration
SELECT * FROM courses
ORDER BY course_duration DESC
LIMIT 2;
