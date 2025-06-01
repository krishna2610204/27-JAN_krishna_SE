-- Create two new users
CREATE USER 'user1'@'localhost' IDENTIFIED BY 'password1';
CREATE USER 'user2'@'localhost' IDENTIFIED BY 'password2';

-- Grant SELECT permission on the courses table to user1
GRANT SELECT ON courses.* TO 'user1'@'localhost';

-- Revoke INSERT permission from user1
REVOKE INSERT ON courses.* FROM 'user1'@'localhost';

-- Grant INSERT permission to user2
GRANT INSERT ON courses.* TO 'user2'@'localhost';
