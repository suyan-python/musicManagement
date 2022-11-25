-- phpMyAdmin SQL Dump
-- version 5.1.1
-- https://www.phpmyadmin.net/
--
-- Host: 127.0.0.1
-- Generation Time: Mar 17, 2022 at 06:06 AM
-- Server version: 10.4.22-MariaDB
-- PHP Version: 7.4.27

SET SQL_MODE = "NO_AUTO_VALUE_ON_ZERO";
START TRANSACTION;
SET time_zone = "+00:00";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8mb4 */;

--
-- Database: `musicdb`
--

-- --------------------------------------------------------

--
-- Table structure for table `musicinfo_tb`
--

CREATE TABLE `musicinfo_tb` (
  `m_id` int(11) NOT NULL,
  `m_category` varchar(100) DEFAULT '0',
  `m_type` varchar(100) DEFAULT '0',
  `m_name` varchar(100) NOT NULL DEFAULT '0',
  `m_artist` varchar(100) NOT NULL DEFAULT '0',
  `m_price` varchar(100) NOT NULL DEFAULT '0',
  `m_quantity` varchar(100) NOT NULL DEFAULT '0'
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

--
-- Dumping data for table `musicinfo_tb`
--

INSERT INTO `musicinfo_tb` (`m_id`, `m_category`, `m_type`, `m_name`, `m_artist`, `m_price`, `m_quantity`) VALUES
(1, 'PopMusic', 'best', 'RememberME', 'Rey Valera', '2500', '100');

-- --------------------------------------------------------

--
-- Table structure for table `solditem_tb`
--

CREATE TABLE `solditem_tb` (
  `m_id` int(11) NOT NULL,
  `m_category` varchar(100) DEFAULT '0',
  `m_type` varchar(100) DEFAULT '0',
  `m_name` varchar(100) NOT NULL DEFAULT '0',
  `m_artist` varchar(100) NOT NULL DEFAULT '0',
  `m_price` varchar(100) NOT NULL DEFAULT '0',
  `m_quantity` varchar(100) NOT NULL DEFAULT '0'
) ENGINE=InnoDB DEFAULT CHARSET=latin1 ROW_FORMAT=COMPACT;

--
-- Dumping data for table `solditem_tb`
--

INSERT INTO `solditem_tb` (`m_id`, `m_category`, `m_type`, `m_name`, `m_artist`, `m_price`, `m_quantity`) VALUES
(1, 'PopMusic', 'best', 'Akala koy Ikaw ay akin', 'Kirk Eriman', '1000', '1'),
(2, 'PopMusic', 'best', 'Akala koy Ikaw ay akin', 'Kirk Eriman', '1000', '1'),
(3, 'PopMusic', 'best', 'Akala koy Ikaw ay akin', 'Kirk Eriman', '1000', '1'),
(4, 'PopMusic', 'best', 'Akala koy Ikaw ay akin', 'Kirk Eriman', '1000', '1');

--
-- Indexes for dumped tables
--

--
-- Indexes for table `musicinfo_tb`
--
ALTER TABLE `musicinfo_tb`
  ADD PRIMARY KEY (`m_id`);

--
-- Indexes for table `solditem_tb`
--
ALTER TABLE `solditem_tb`
  ADD PRIMARY KEY (`m_id`);

--
-- AUTO_INCREMENT for dumped tables
--

--
-- AUTO_INCREMENT for table `musicinfo_tb`
--
ALTER TABLE `musicinfo_tb`
  MODIFY `m_id` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=2;

--
-- AUTO_INCREMENT for table `solditem_tb`
--
ALTER TABLE `solditem_tb`
  MODIFY `m_id` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=5;
COMMIT;

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
