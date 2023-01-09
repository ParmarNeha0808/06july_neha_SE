-- phpMyAdmin SQL Dump
-- version 5.2.0
-- https://www.phpmyadmin.net/
--
-- Host: 127.0.0.1
-- Generation Time: Jan 09, 2023 at 12:28 PM
-- Server version: 10.4.27-MariaDB
-- PHP Version: 8.1.12

SET SQL_MODE = "NO_AUTO_VALUE_ON_ZERO";
START TRANSACTION;
SET time_zone = "+00:00";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8mb4 */;

--
-- Database: `student`
--

-- --------------------------------------------------------

--
-- Table structure for table `customer`
--

CREATE TABLE `customer` (
  `PK_CNM` int(10) DEFAULT NULL,
  `CNAME` varchar(20) DEFAULT NULL,
  `CITY` varchar(20) DEFAULT NULL,
  `RATING` int(10) DEFAULT NULL,
  `FK_SNo` int(10) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

--
-- Dumping data for table `customer`
--

INSERT INTO `customer` (`PK_CNM`, `CNAME`, `CITY`, `RATING`, `FK_SNo`) VALUES
(201, 'Hoffman', 'London', 100, 1001),
(202, 'Giovanne', 'Roe', 200, 1003),
(203, 'Liu', 'San Jose', 300, 1002),
(204, 'Grass', 'Barcelona', 100, 1002),
(206, 'Clemens', 'London', 300, 1007),
(207, 'Perelra', 'Roe', 100, 1004);

-- --------------------------------------------------------

--
-- Table structure for table `exam`
--

CREATE TABLE `exam` (
  `roll_no` int(10) DEFAULT NULL,
  `S_code` varchar(20) DEFAULT NULL,
  `Marks` int(10) DEFAULT NULL,
  `P_code` varchar(20) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

--
-- Dumping data for table `exam`
--

INSERT INTO `exam` (`roll_no`, `S_code`, `Marks`, `P_code`) VALUES
(1, 'CS11', 50, 'CS'),
(1, 'CS12', 60, 'CS'),
(2, 'EC101', 66, 'EC'),
(2, 'EC102', 70, 'EC'),
(3, 'EC101', 45, 'EC'),
(3, 'EC102', 50, 'EC');

-- --------------------------------------------------------

--
-- Table structure for table `information`
--

CREATE TABLE `information` (
  `Firstname` varchar(20) DEFAULT NULL,
  `Lastname` varchar(20) DEFAULT NULL,
  `Address` varchar(30) DEFAULT NULL,
  `City` varchar(10) DEFAULT NULL,
  `Age` int(10) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

--
-- Dumping data for table `information`
--

INSERT INTO `information` (`Firstname`, `Lastname`, `Address`, `City`, `Age`) VALUES
('Mickey', 'mouse', '123Fantasy Way', 'Anaheim', 73),
('Bat', 'Man', '321Cavem Ave', 'Gotham', 54),
('Wonder', 'Woman', '987Truth Way', 'Paradise', 39),
('Donald', 'Duck', '555Quack Street', 'Mallard', 65),
('Bugs', 'Bunny', '567 Carrot Street', 'Rascal', 58),
('Wiley', 'Coyote', '999 Acme Way', 'Canyon', 61),
('Cat', 'Woman', '234 Purrfect Street', 'Hairball', 32),
('Tweety', 'Bird', '543', 'Itotltaw', 28);

-- --------------------------------------------------------

--
-- Table structure for table `salseperson`
--

CREATE TABLE `salseperson` (
  `PK_SNo` int(10) DEFAULT NULL,
  `SNAME` varchar(20) DEFAULT NULL,
  `CITY` varchar(20) DEFAULT NULL,
  `COMM` int(10) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

--
-- Dumping data for table `salseperson`
--

INSERT INTO `salseperson` (`PK_SNo`, `SNAME`, `CITY`, `COMM`) VALUES
(1001, 'Peel', 'London', 12),
(1002, 'Serres', 'San Jose', 13),
(1004, 'Motika', 'London', 11),
(1007, 'Rafkin', 'Barcelona', 15),
(1003, 'Axelrod', 'New York', 1);

-- --------------------------------------------------------

--
-- Table structure for table `student`
--

CREATE TABLE `student` (
  `rollno` int(10) NOT NULL,
  `name` varchar(20) DEFAULT NULL,
  `branch` varchar(20) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

--
-- Dumping data for table `student`
--

INSERT INTO `student` (`rollno`, `name`, `branch`) VALUES
(1, 'jay', 'computer science'),
(2, 'suhani', 'electronic and com'),
(3, 'kriti', 'electronic and com');

--
-- Indexes for dumped tables
--

--
-- Indexes for table `exam`
--
ALTER TABLE `exam`
  ADD KEY `roll_no` (`roll_no`);

--
-- Indexes for table `student`
--
ALTER TABLE `student`
  ADD PRIMARY KEY (`rollno`);

--
-- Constraints for dumped tables
--

--
-- Constraints for table `exam`
--
ALTER TABLE `exam`
  ADD CONSTRAINT `exam_ibfk_1` FOREIGN KEY (`roll_no`) REFERENCES `student` (`rollno`);
COMMIT;

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
