--------------------------------------------------------------------------------
-- Copyright (c) 1995-2013 Xilinx, Inc.  All rights reserved.
--------------------------------------------------------------------------------
--   ____  ____ 
--  /   /\/   / 
-- /___/  \  /    Vendor: Xilinx 
-- \   \   \/     Version : 14.7
--  \   \         Application : sch2hdl
--  /   /         Filename : TOP_LEVEL.vhf
-- /___/   /\     Timestamp : 10/23/2017 14:33:43
-- \   \  /  \ 
--  \___\/\___\ 
--
--Command: sch2hdl -sympath /home/rrivera/g-2/fromWindows/KickerControllerFirmware-master/ipcore_dir -sympath /home/rrivera/g-2/fromWindows/KickerControllerFirmware-master/GEL_CAPTAN/ipcore_dir -intstyle ise -family virtex4 -flat -suppress -vhdl /home/rrivera/g-2/fromWindows/KickerControllerFirmware-master/GEL_CAPTAN/TOP_LEVEL.vhf -w /home/rrivera/g-2/fromWindows/KickerControllerFirmware-master/GEL_CAPTAN/TOP_LEVEL.sch
--Design Name: TOP_LEVEL
--Device: virtex4
--Purpose:
--    This vhdl netlist is translated from an ECS schematic. It can be 
--    synthesized and simulated, but it should not be modified. 
--

library ieee;
use ieee.std_logic_1164.ALL;
use ieee.numeric_std.ALL;
library UNISIM;
use UNISIM.Vcomponents.ALL;

entity M2_1_MXILINX_TOP_LEVEL is
   port ( D0 : in    std_logic; 
          D1 : in    std_logic; 
          S0 : in    std_logic; 
          O  : out   std_logic);
end M2_1_MXILINX_TOP_LEVEL;

architecture BEHAVIORAL of M2_1_MXILINX_TOP_LEVEL is
   attribute BOX_TYPE   : string ;
   signal M0 : std_logic;
   signal M1 : std_logic;
   component AND2B1
      port ( I0 : in    std_logic; 
             I1 : in    std_logic; 
             O  : out   std_logic);
   end component;
   attribute BOX_TYPE of AND2B1 : component is "BLACK_BOX";
   
   component OR2
      port ( I0 : in    std_logic; 
             I1 : in    std_logic; 
             O  : out   std_logic);
   end component;
   attribute BOX_TYPE of OR2 : component is "BLACK_BOX";
   
   component AND2
      port ( I0 : in    std_logic; 
             I1 : in    std_logic; 
             O  : out   std_logic);
   end component;
   attribute BOX_TYPE of AND2 : component is "BLACK_BOX";
   
begin
   I_36_7 : AND2B1
      port map (I0=>S0,
                I1=>D0,
                O=>M0);
   
   I_36_8 : OR2
      port map (I0=>M1,
                I1=>M0,
                O=>O);
   
   I_36_9 : AND2
      port map (I0=>D1,
                I1=>S0,
                O=>M1);
   
end BEHAVIORAL;



library ieee;
use ieee.std_logic_1164.ALL;
use ieee.numeric_std.ALL;
library UNISIM;
use UNISIM.Vcomponents.ALL;

entity FD16RE_MXILINX_TOP_LEVEL is
   port ( C  : in    std_logic; 
          CE : in    std_logic; 
          D  : in    std_logic_vector (15 downto 0); 
          R  : in    std_logic; 
          Q  : out   std_logic_vector (15 downto 0));
end FD16RE_MXILINX_TOP_LEVEL;

architecture BEHAVIORAL of FD16RE_MXILINX_TOP_LEVEL is
   attribute BOX_TYPE   : string ;
   component FDRE
      generic( INIT : bit :=  '0');
      port ( C  : in    std_logic; 
             CE : in    std_logic; 
             D  : in    std_logic; 
             R  : in    std_logic; 
             Q  : out   std_logic);
   end component;
   attribute BOX_TYPE of FDRE : component is "BLACK_BOX";
   
begin
   I_Q0 : FDRE
      port map (C=>C,
                CE=>CE,
                D=>D(0),
                R=>R,
                Q=>Q(0));
   
   I_Q1 : FDRE
      port map (C=>C,
                CE=>CE,
                D=>D(1),
                R=>R,
                Q=>Q(1));
   
   I_Q2 : FDRE
      port map (C=>C,
                CE=>CE,
                D=>D(2),
                R=>R,
                Q=>Q(2));
   
   I_Q3 : FDRE
      port map (C=>C,
                CE=>CE,
                D=>D(3),
                R=>R,
                Q=>Q(3));
   
   I_Q4 : FDRE
      port map (C=>C,
                CE=>CE,
                D=>D(4),
                R=>R,
                Q=>Q(4));
   
   I_Q5 : FDRE
      port map (C=>C,
                CE=>CE,
                D=>D(5),
                R=>R,
                Q=>Q(5));
   
   I_Q6 : FDRE
      port map (C=>C,
                CE=>CE,
                D=>D(6),
                R=>R,
                Q=>Q(6));
   
   I_Q7 : FDRE
      port map (C=>C,
                CE=>CE,
                D=>D(7),
                R=>R,
                Q=>Q(7));
   
   I_Q8 : FDRE
      port map (C=>C,
                CE=>CE,
                D=>D(8),
                R=>R,
                Q=>Q(8));
   
   I_Q9 : FDRE
      port map (C=>C,
                CE=>CE,
                D=>D(9),
                R=>R,
                Q=>Q(9));
   
   I_Q10 : FDRE
      port map (C=>C,
                CE=>CE,
                D=>D(10),
                R=>R,
                Q=>Q(10));
   
   I_Q11 : FDRE
      port map (C=>C,
                CE=>CE,
                D=>D(11),
                R=>R,
                Q=>Q(11));
   
   I_Q12 : FDRE
      port map (C=>C,
                CE=>CE,
                D=>D(12),
                R=>R,
                Q=>Q(12));
   
   I_Q13 : FDRE
      port map (C=>C,
                CE=>CE,
                D=>D(13),
                R=>R,
                Q=>Q(13));
   
   I_Q14 : FDRE
      port map (C=>C,
                CE=>CE,
                D=>D(14),
                R=>R,
                Q=>Q(14));
   
   I_Q15 : FDRE
      port map (C=>C,
                CE=>CE,
                D=>D(15),
                R=>R,
                Q=>Q(15));
   
end BEHAVIORAL;



library ieee;
use ieee.std_logic_1164.ALL;
use ieee.numeric_std.ALL;
library UNISIM;
use UNISIM.Vcomponents.ALL;

entity FD8RE_MXILINX_TOP_LEVEL is
   port ( C  : in    std_logic; 
          CE : in    std_logic; 
          D  : in    std_logic_vector (7 downto 0); 
          R  : in    std_logic; 
          Q  : out   std_logic_vector (7 downto 0));
end FD8RE_MXILINX_TOP_LEVEL;

architecture BEHAVIORAL of FD8RE_MXILINX_TOP_LEVEL is
   attribute BOX_TYPE   : string ;
   component FDRE
      generic( INIT : bit :=  '0');
      port ( C  : in    std_logic; 
             CE : in    std_logic; 
             D  : in    std_logic; 
             R  : in    std_logic; 
             Q  : out   std_logic);
   end component;
   attribute BOX_TYPE of FDRE : component is "BLACK_BOX";
   
begin
   I_Q0 : FDRE
      port map (C=>C,
                CE=>CE,
                D=>D(0),
                R=>R,
                Q=>Q(0));
   
   I_Q1 : FDRE
      port map (C=>C,
                CE=>CE,
                D=>D(1),
                R=>R,
                Q=>Q(1));
   
   I_Q2 : FDRE
      port map (C=>C,
                CE=>CE,
                D=>D(2),
                R=>R,
                Q=>Q(2));
   
   I_Q3 : FDRE
      port map (C=>C,
                CE=>CE,
                D=>D(3),
                R=>R,
                Q=>Q(3));
   
   I_Q4 : FDRE
      port map (C=>C,
                CE=>CE,
                D=>D(4),
                R=>R,
                Q=>Q(4));
   
   I_Q5 : FDRE
      port map (C=>C,
                CE=>CE,
                D=>D(5),
                R=>R,
                Q=>Q(5));
   
   I_Q6 : FDRE
      port map (C=>C,
                CE=>CE,
                D=>D(6),
                R=>R,
                Q=>Q(6));
   
   I_Q7 : FDRE
      port map (C=>C,
                CE=>CE,
                D=>D(7),
                R=>R,
                Q=>Q(7));
   
end BEHAVIORAL;



library ieee;
use ieee.std_logic_1164.ALL;
use ieee.numeric_std.ALL;
library UNISIM;
use UNISIM.Vcomponents.ALL;

entity OBUF8_MXILINX_TOP_LEVEL is
   port ( I : in    std_logic_vector (7 downto 0); 
          O : out   std_logic_vector (7 downto 0));
end OBUF8_MXILINX_TOP_LEVEL;

architecture BEHAVIORAL of OBUF8_MXILINX_TOP_LEVEL is
   attribute IOSTANDARD  : string ;
   attribute CAPACITANCE : string ;
   attribute SLEW        : string ;
   attribute DRIVE       : string ;
   attribute BOX_TYPE    : string ;
   component OBUF
      port ( I : in    std_logic; 
             O : out   std_logic);
   end component;
   attribute IOSTANDARD of OBUF : component is "DEFAULT";
   attribute CAPACITANCE of OBUF : component is "DONT_CARE";
   attribute SLEW of OBUF : component is "SLOW";
   attribute DRIVE of OBUF : component is "12";
   attribute BOX_TYPE of OBUF : component is "BLACK_BOX";
   
begin
   I_36_30 : OBUF
      port map (I=>I(0),
                O=>O(0));
   
   I_36_31 : OBUF
      port map (I=>I(1),
                O=>O(1));
   
   I_36_32 : OBUF
      port map (I=>I(2),
                O=>O(2));
   
   I_36_33 : OBUF
      port map (I=>I(3),
                O=>O(3));
   
   I_36_34 : OBUF
      port map (I=>I(7),
                O=>O(7));
   
   I_36_35 : OBUF
      port map (I=>I(6),
                O=>O(6));
   
   I_36_36 : OBUF
      port map (I=>I(5),
                O=>O(5));
   
   I_36_37 : OBUF
      port map (I=>I(4),
                O=>O(4));
   
end BEHAVIORAL;



library ieee;
use ieee.std_logic_1164.ALL;
use ieee.numeric_std.ALL;
library UNISIM;
use UNISIM.Vcomponents.ALL;

entity D4_16E_MXILINX_TOP_LEVEL is
   port ( A0  : in    std_logic; 
          A1  : in    std_logic; 
          A2  : in    std_logic; 
          A3  : in    std_logic; 
          E   : in    std_logic; 
          D0  : out   std_logic; 
          D1  : out   std_logic; 
          D2  : out   std_logic; 
          D3  : out   std_logic; 
          D4  : out   std_logic; 
          D5  : out   std_logic; 
          D6  : out   std_logic; 
          D7  : out   std_logic; 
          D8  : out   std_logic; 
          D9  : out   std_logic; 
          D10 : out   std_logic; 
          D11 : out   std_logic; 
          D12 : out   std_logic; 
          D13 : out   std_logic; 
          D14 : out   std_logic; 
          D15 : out   std_logic);
end D4_16E_MXILINX_TOP_LEVEL;

architecture BEHAVIORAL of D4_16E_MXILINX_TOP_LEVEL is
   attribute BOX_TYPE   : string ;
   component AND5B3
      port ( I0 : in    std_logic; 
             I1 : in    std_logic; 
             I2 : in    std_logic; 
             I3 : in    std_logic; 
             I4 : in    std_logic; 
             O  : out   std_logic);
   end component;
   attribute BOX_TYPE of AND5B3 : component is "BLACK_BOX";
   
   component AND5B2
      port ( I0 : in    std_logic; 
             I1 : in    std_logic; 
             I2 : in    std_logic; 
             I3 : in    std_logic; 
             I4 : in    std_logic; 
             O  : out   std_logic);
   end component;
   attribute BOX_TYPE of AND5B2 : component is "BLACK_BOX";
   
   component AND5B1
      port ( I0 : in    std_logic; 
             I1 : in    std_logic; 
             I2 : in    std_logic; 
             I3 : in    std_logic; 
             I4 : in    std_logic; 
             O  : out   std_logic);
   end component;
   attribute BOX_TYPE of AND5B1 : component is "BLACK_BOX";
   
   component AND5
      port ( I0 : in    std_logic; 
             I1 : in    std_logic; 
             I2 : in    std_logic; 
             I3 : in    std_logic; 
             I4 : in    std_logic; 
             O  : out   std_logic);
   end component;
   attribute BOX_TYPE of AND5 : component is "BLACK_BOX";
   
   component AND5B4
      port ( I0 : in    std_logic; 
             I1 : in    std_logic; 
             I2 : in    std_logic; 
             I3 : in    std_logic; 
             I4 : in    std_logic; 
             O  : out   std_logic);
   end component;
   attribute BOX_TYPE of AND5B4 : component is "BLACK_BOX";
   
begin
   I_36_53 : AND5B3
      port map (I0=>A0,
                I1=>A1,
                I2=>A2,
                I3=>A3,
                I4=>E,
                O=>D8);
   
   I_36_54 : AND5B2
      port map (I0=>A1,
                I1=>A2,
                I2=>E,
                I3=>A3,
                I4=>A0,
                O=>D9);
   
   I_36_55 : AND5B2
      port map (I0=>A0,
                I1=>A2,
                I2=>E,
                I3=>A3,
                I4=>A1,
                O=>D10);
   
   I_36_56 : AND5B1
      port map (I0=>A2,
                I1=>A0,
                I2=>A1,
                I3=>A3,
                I4=>E,
                O=>D11);
   
   I_36_57 : AND5B2
      port map (I0=>A0,
                I1=>A1,
                I2=>E,
                I3=>A3,
                I4=>A2,
                O=>D12);
   
   I_36_58 : AND5B1
      port map (I0=>A1,
                I1=>A0,
                I2=>A2,
                I3=>A3,
                I4=>E,
                O=>D13);
   
   I_36_59 : AND5B1
      port map (I0=>A0,
                I1=>A1,
                I2=>A2,
                I3=>A3,
                I4=>E,
                O=>D14);
   
   I_36_60 : AND5
      port map (I0=>A3,
                I1=>A2,
                I2=>A1,
                I3=>A0,
                I4=>E,
                O=>D15);
   
   I_36_61 : AND5B2
      port map (I0=>A3,
                I1=>A0,
                I2=>E,
                I3=>A2,
                I4=>A1,
                O=>D6);
   
   I_36_62 : AND5B1
      port map (I0=>A3,
                I1=>A2,
                I2=>A1,
                I3=>A0,
                I4=>E,
                O=>D7);
   
   I_36_63 : AND5B2
      port map (I0=>A3,
                I1=>A1,
                I2=>E,
                I3=>A2,
                I4=>A0,
                O=>D5);
   
   I_36_64 : AND5B3
      port map (I0=>A0,
                I1=>A1,
                I2=>A3,
                I3=>A2,
                I4=>E,
                O=>D4);
   
   I_36_65 : AND5B2
      port map (I0=>A2,
                I1=>A3,
                I2=>E,
                I3=>A0,
                I4=>A1,
                O=>D3);
   
   I_36_66 : AND5B3
      port map (I0=>A0,
                I1=>A3,
                I2=>A2,
                I3=>A1,
                I4=>E,
                O=>D2);
   
   I_36_67 : AND5B3
      port map (I0=>A1,
                I1=>A2,
                I2=>A3,
                I3=>A0,
                I4=>E,
                O=>D1);
   
   I_36_68 : AND5B4
      port map (I0=>A3,
                I1=>A2,
                I2=>A1,
                I3=>A0,
                I4=>E,
                O=>D0);
   
end BEHAVIORAL;



library ieee;
use ieee.std_logic_1164.ALL;
use ieee.numeric_std.ALL;
library UNISIM;
use UNISIM.Vcomponents.ALL;

entity TOP_LEVEL is
   port ( BUSA_26DN_53S     : in    std_logic; 
          BUSA_26DP_52S     : in    std_logic; 
          BUSA_28DN_57S     : in    std_logic; 
          BUSA_28DP_56S     : in    std_logic; 
          BUSA_29DN_59S     : in    std_logic; 
          BUSA_29DP_58S     : in    std_logic; 
          BUSA_30DN_61S     : in    std_logic; 
          BUSA_30DP_60S     : in    std_logic; 
          BUSBHS_02DN_05S   : in    std_logic; 
          BUSBHS_02DP_04S   : in    std_logic; 
          BUSB_00DN_01S     : in    std_logic; 
          BUSB_00DP_00S     : in    std_logic; 
          BUSB_01DN_03S     : in    std_logic; 
          BUSB_01DP_02S     : in    std_logic; 
          BUSB_02DN_05S     : in    std_logic; 
          BUSB_02DP_04S     : in    std_logic; 
          BUSB_03DN_07S     : in    std_logic; 
          BUSB_03DP_06S     : in    std_logic; 
          BUSB_04DN_09S     : in    std_logic; 
          BUSB_04DP_08S     : in    std_logic; 
          BUSB_05DN_11S     : in    std_logic; 
          BUSB_05DP_10S     : in    std_logic; 
          BUSB_06DN_13S     : in    std_logic; 
          BUSB_06DP_12S     : in    std_logic; 
          BUSB_07DN_15S     : in    std_logic; 
          BUSB_07DP_14S     : in    std_logic; 
          BUSB_08DN_17S     : in    std_logic; 
          BUSB_08DP_16S     : in    std_logic; 
          BUSB_09DN_19S     : in    std_logic; 
          BUSB_09DP_18S     : in    std_logic; 
          BUSB_10DN_21S     : in    std_logic; 
          BUSB_10DP_20S     : in    std_logic; 
          BUSB_11DN_23S     : in    std_logic; 
          BUSB_11DP_22S     : in    std_logic; 
          BUSB_12DN_25S     : in    std_logic; 
          BUSB_12DP_24S     : in    std_logic; 
          BUSB_13DN_27S     : in    std_logic; 
          BUSB_13DP_26S     : in    std_logic; 
          BUSB_14DN_29S     : in    std_logic; 
          BUSB_14DP_28S     : in    std_logic; 
          BUSB_15DN_31S     : in    std_logic; 
          BUSB_15DP_30S     : in    std_logic; 
          BUSC_16DP_32S     : in    std_logic; 
          BUSC_17DN_35S     : in    std_logic; 
          BUSC_17DP_34S     : in    std_logic; 
          BUSC_18DN_37S     : in    std_logic; 
          BUSC_18DP_36S     : in    std_logic; 
          BUSC_19DN_39S     : in    std_logic; 
          BUSC_19DP_38S     : in    std_logic; 
          BUSC_20DN_41S     : in    std_logic; 
          BUSC_20DP_40S     : in    std_logic; 
          BUSC_27DP_54S     : in    std_logic; 
          GEL_RXCLK         : in    std_logic; 
          IP_MAC_0          : in    std_logic; 
          IP_MAC_1          : in    std_logic; 
          IP_MAC_2          : in    std_logic; 
          IP_MAC_3          : in    std_logic; 
          IP_MAC_4          : in    std_logic; 
          IP_MAC_5          : in    std_logic; 
          IP_MAC_6          : in    std_logic; 
          IP_MAC_7          : in    std_logic; 
          SECONDARY_CLK     : in    std_logic; 
          U10_1             : in    std_logic; 
          U10_2             : in    std_logic; 
          BUSBHS_03DN_07S   : out   std_logic; 
          BUSBHS_03DP_06S   : out   std_logic; 
          BUSC_14DN_29S     : out   std_logic; 
          BUSC_14DP_28S     : out   std_logic; 
          BUSC_15DN_31S     : out   std_logic; 
          BUSC_15DP_30S     : out   std_logic; 
          BUSC_16DN_33S     : out   std_logic; 
          BUSC_21DN_43S     : out   std_logic; 
          BUSC_24DN_49S     : out   std_logic; 
          BUSC_24DP_48S     : out   std_logic; 
          BUSC_25DN_51S     : out   std_logic; 
          BUSC_25DP_50S     : out   std_logic; 
          BUSC_26DN_53S     : out   std_logic; 
          BUSC_27DN_55S     : out   std_logic; 
          BUSDD_00DP_00S    : out   std_logic; 
          BUSDD_01DP_02S    : out   std_logic; 
          BUSDD_02DP_04S    : out   std_logic; 
          BUSDD_03DP_06S    : out   std_logic; 
          BUSDD_04DP_08S    : out   std_logic; 
          BUSDD_05DP_10S    : out   std_logic; 
          GENERAL_12DN_25S  : out   std_logic; 
          GENERAL_12DP_24S  : out   std_logic; 
          INTERNAL_08DN_17S : out   std_logic; 
          INTERNAL_08DP_16S : out   std_logic; 
          U10_3             : out   std_logic);
end TOP_LEVEL;

architecture BEHAVIORAL of TOP_LEVEL is
   attribute INIT_Q1               : string ;
   attribute INIT_Q2               : string ;
   attribute DDR_CLK_EDGE          : string ;
   attribute SRTYPE                : string ;
   attribute BOX_TYPE              : string ;
   attribute HU_SET                : string ;
   attribute IOBDELAY_VALUE        : string ;
   attribute IOBDELAY_TYPE         : string ;
   attribute CLK_FEEDBACK          : string ;
   attribute CLKDV_DIVIDE          : string ;
   attribute CLKFX_DIVIDE          : string ;
   attribute CLKFX_MULTIPLY        : string ;
   attribute CLKIN_DIVIDE_BY_2     : string ;
   attribute CLKIN_PERIOD          : string ;
   attribute CLKOUT_PHASE_SHIFT    : string ;
   attribute DCM_PERFORMANCE_MODE  : string ;
   attribute DESKEW_ADJUST         : string ;
   attribute DFS_FREQUENCY_MODE    : string ;
   attribute DLL_FREQUENCY_MODE    : string ;
   attribute DUTY_CYCLE_CORRECTION : string ;
   attribute FACTORY_JF            : string ;
   attribute PHASE_SHIFT           : string ;
   attribute STARTUP_WAIT          : string ;
   attribute DCM_AUTOCALIBRATION   : string ;
   attribute IOSTANDARD            : string ;
   attribute CAPACITANCE           : string ;
   attribute SLEW                  : string ;
   attribute DRIVE                 : string ;
   attribute DIFF_TERM             : string ;
   signal adc_fifo_empty                 : std_logic;
   signal adc_fifo_overflow              : std_logic;
   signal apply_median_filter            : std_logic;
   signal b_data                         : std_logic_vector (63 downto 0);
   signal b_data_we                      : std_logic;
   signal b_enable                       : std_logic;
   signal b_end_packet                   : std_logic;
   signal b_force_packet                 : std_logic;
   signal clear_manual_trig              : std_logic;
   signal clk_latch_signals              : std_logic_vector (7 downto 0);
   signal CLK_MUX                        : std_logic;
   signal CLK_187_5                      : std_logic;
   signal CLK_375                        : std_logic;
   signal clock_enable                   : std_logic;
   signal clock_5mhz                     : std_logic;
   signal data_send_in                   : std_logic_vector (63 downto 0);
   signal dcm_mux_sel                    : std_logic;
   signal DCM_RESET_MAP                  : std_logic;
   signal dcm_reset_0                    : std_logic;
   signal dcm_reset_1                    : std_logic;
   signal dcm_reset_2                    : std_logic;
   signal debug_signals                  : std_logic_vector (63 downto 0);
   signal event_data                     : std_logic_vector (63 downto 0);
   signal event_data_end                 : std_logic;
   signal event_data_we                  : std_logic;
   signal EVENT_MAP                      : std_logic;
   signal ext_ip_addr                    : std_logic_vector (7 downto 0);
   signal ext_trig                       : std_logic;
   signal FADC_CAL                       : std_logic;
   signal fadc_clk_in_reset              : std_logic;
   signal FADC_CLK_N                     : std_logic;
   signal FADC_CLK_P                     : std_logic;
   signal fadc_ctrl_data                 : std_logic_vector (15 downto 0);
   signal FADC_CTRL_MAP                  : std_logic;
   signal fadc_data_del_ce               : std_logic;
   signal fadc_data_del_rst              : std_logic;
   signal FADC_DATA_EDGE_MAP             : std_logic;
   signal fadc_data_edge_sel             : std_logic_vector (15 downto 0);
   signal fadc_data_in                   : std_logic_vector (15 downto 0);
   signal FADC_DCLK                      : std_logic;
   signal fadc_dclk_in                   : std_logic;
   signal FADC_DCLK_INV                  : std_logic;
   signal fadc_debug                     : std_logic_vector (63 downto 0);
   signal FADC_DELAY_MAP                 : std_logic;
   signal fadc_done                      : std_logic;
   signal fadc_fifo_data_out             : std_logic_vector (63 downto 0);
   signal fadc_latched_in                : std_logic_vector (15 downto 0);
   signal fadc_latched_in_fall           : std_logic_vector (15 downto 0);
   signal fadc_latched_in_rise           : std_logic_vector (15 downto 0);
   signal FADC_MAP                       : std_logic;
   signal fadc_raddr                     : std_logic_vector (9 downto 0);
   signal fadc_rdy_for_trigger           : std_logic;
   signal FADC_RST                       : std_logic;
   signal FADC_sampling_clk_xor0         : std_logic;
   signal FADC_sampling_clk_xor1         : std_logic;
   signal fadc_trigger                   : std_logic;
   signal fadc_waddr_rise                : std_logic_vector (9 downto 0);
   signal fadc_wctrl_done                : std_logic;
   signal GLOBAL_RESET_MAP               : std_logic;
   signal GMII_RXD_0_sig                 : std_logic_vector (7 downto 0);
   signal GMII_RX_DV_0_sig               : std_logic;
   signal GMII_RX_ER_0_sig               : std_logic;
   signal GTX_CLK_0_sig                  : std_logic;
   signal ip_addr                        : std_logic_vector (7 downto 0);
   signal manual_force_trig              : std_logic;
   signal MANUAL_TRIG_MAP                : std_logic;
   signal MASTER_CLK                     : std_logic;
   signal MEDIAN_FILTER_MAP              : std_logic;
   signal new_trigger                    : std_logic;
   signal peak_finder_data_out           : std_logic_vector (63 downto 0);
   signal PHY_TXD_sig                    : std_logic_vector (7 downto 0);
   signal PHY_TXEN_sig                   : std_logic;
   signal PHY_TXER_sig                   : std_logic;
   signal psi_status                     : std_logic_vector (63 downto 0);
   signal ram_addr                       : std_logic_vector (9 downto 0);
   signal ram_en                         : std_logic;
   signal ram_en_latch                   : std_logic;
   signal reset                          : std_logic;
   signal reset_clear_veto               : std_logic;
   signal reset_force_veto               : std_logic;
   signal rx_addr                        : std_logic_vector (31 downto 0);
   signal rx_data                        : std_logic_vector (63 downto 0);
   signal rx_wren                        : std_logic;
   signal scin_0                         : std_logic;
   signal scin_1                         : std_logic;
   signal scin_2                         : std_logic;
   signal scin_3                         : std_logic;
   signal threshold                      : std_logic_vector (7 downto 0);
   signal trigger                        : std_logic;
   signal trigger_addr                   : std_logic_vector (9 downto 0);
   signal trigger_out                    : std_logic;
   signal TRIG_ATTRIBUTES_MAP            : std_logic;
   signal trig_debug                     : std_logic_vector (63 downto 0);
   signal TRIG_MAP                       : std_logic;
   signal trig_reset                     : std_logic;
   signal trig_scin0_sel                 : std_logic;
   signal trig_types                     : std_logic_vector (7 downto 0);
   signal tx_data                        : std_logic_vector (63 downto 0);
   signal user_positive_delay            : std_logic_vector (15 downto 0);
   signal user_pretrig_sample_size       : std_logic_vector (15 downto 0);
   signal user_sample_size               : std_logic_vector (15 downto 0);
   signal veto                           : std_logic;
   signal veto_clear                     : std_logic;
   signal veto_enabled                   : std_logic;
   signal veto_force                     : std_logic;
   signal XLXN_12220                     : std_logic;
   signal XLXN_12229                     : std_logic;
   signal XLXN_12257                     : std_logic;
   signal XLXN_12617                     : std_logic;
   signal XLXN_12660                     : std_logic;
   signal XLXN_12661                     : std_logic;
   signal XLXN_12669                     : std_logic;
   signal XLXN_12671                     : std_logic;
   signal XLXN_12672                     : std_logic;
   signal XLXN_12781                     : std_logic;
   signal XLXN_12923                     : std_logic;
   signal XLXN_12930                     : std_logic;
   signal XLXN_12931                     : std_logic;
   signal XLXN_15064                     : std_logic;
   signal XLXN_15075                     : std_logic;
   signal XLXN_15077                     : std_logic;
   signal XLXN_15087                     : std_logic;
   signal XLXN_15092                     : std_logic;
   signal XLXN_15130                     : std_logic;
   signal XLXN_15140                     : std_logic;
   signal XLXN_15150                     : std_logic;
   signal XLXN_15518                     : std_logic;
   signal XLXN_15524                     : std_logic;
   signal XLXN_15529                     : std_logic;
   signal XLXN_15533                     : std_logic;
   signal XLXN_15874                     : std_logic_vector (63 downto 0);
   signal XLXN_15958                     : std_logic;
   signal XLXN_16002                     : std_logic;
   signal XLXN_16003                     : std_logic;
   signal XLXN_16004                     : std_logic;
   signal XLXN_16009                     : std_logic;
   signal zero_cross_count               : std_logic_vector (7 downto 0);
   signal zero_cross_thresh_high         : std_logic_vector (7 downto 0);
   signal zero_cross_thresh_low          : std_logic_vector (7 downto 0);
   signal zero_cross_veto_thresh         : std_logic_vector (7 downto 0);
   signal XLXI_5338_in4_openSignal       : std_logic_vector (63 downto 0);
   signal XLXI_5338_in5_openSignal       : std_logic_vector (63 downto 0);
   signal XLXI_5338_in6_openSignal       : std_logic_vector (63 downto 0);
   signal XLXI_5338_in7_openSignal       : std_logic_vector (63 downto 0);
   signal XLXI_6253_header_openSignal    : std_logic_vector (59 downto 0);
   signal XLXI_6253_signal_ID_openSignal : std_logic_vector (3 downto 0);
   component IDDR
      -- synopsys translate_off
      generic( INIT_Q1 : bit :=  '0';
               INIT_Q2 : bit :=  '0';
               DDR_CLK_EDGE : string :=  "OPPOSITE_EDGE";
               SRTYPE : string :=  "SYNC");
      -- synopsys translate_on
      port ( D  : in    std_logic; 
             CE : in    std_logic; 
             C  : in    std_logic; 
             S  : in    std_logic; 
             R  : in    std_logic; 
             Q1 : out   std_logic; 
             Q2 : out   std_logic);
   end component;
   attribute INIT_Q1 of IDDR : component is "0";
   attribute INIT_Q2 of IDDR : component is "0";
   attribute DDR_CLK_EDGE of IDDR : component is "OPPOSITE_EDGE";
   attribute SRTYPE of IDDR : component is "SYNC";
   attribute BOX_TYPE of IDDR : component is "BLACK_BOX";
   
   component M2_1_MXILINX_TOP_LEVEL
      port ( D0 : in    std_logic; 
             D1 : in    std_logic; 
             S0 : in    std_logic; 
             O  : out   std_logic);
   end component;
   
   component IDELAY
      -- synopsys translate_off
      generic( IOBDELAY_VALUE : integer :=  0;
               IOBDELAY_TYPE : string :=  "DEFAULT");
      -- synopsys translate_on
      port ( I   : in    std_logic; 
             CE  : in    std_logic; 
             C   : in    std_logic; 
             INC : in    std_logic; 
             RST : in    std_logic; 
             O   : out   std_logic);
   end component;
   attribute IOBDELAY_VALUE of IDELAY : component is "0";
   attribute IOBDELAY_TYPE of IDELAY : component is "DEFAULT";
   attribute BOX_TYPE of IDELAY : component is "BLACK_BOX";
   
   component IDELAYCTRL
      port ( REFCLK : in    std_logic; 
             RST    : in    std_logic; 
             RDY    : out   std_logic);
   end component;
   attribute BOX_TYPE of IDELAYCTRL : component is "BLACK_BOX";
   
   component AND2
      port ( I0 : in    std_logic; 
             I1 : in    std_logic; 
             O  : out   std_logic);
   end component;
   attribute BOX_TYPE of AND2 : component is "BLACK_BOX";
   
   component DCM_BASE
      -- synopsys translate_off
      generic( CLK_FEEDBACK : string :=  "1X";
               CLKDV_DIVIDE : real :=  2.0;
               CLKFX_DIVIDE : integer :=  1;
               CLKFX_MULTIPLY : integer :=  4;
               CLKIN_DIVIDE_BY_2 : boolean :=  FALSE;
               CLKIN_PERIOD : real :=  10.0;
               CLKOUT_PHASE_SHIFT : string :=  "NONE";
               DCM_PERFORMANCE_MODE : string :=  "MAX_SPEED";
               DESKEW_ADJUST : string :=  "SYSTEM_SYNCHRONOUS";
               DFS_FREQUENCY_MODE : string :=  "LOW";
               DLL_FREQUENCY_MODE : string :=  "LOW";
               DUTY_CYCLE_CORRECTION : boolean :=  TRUE;
               FACTORY_JF : bit_vector :=  x"F0F0";
               PHASE_SHIFT : integer :=  0;
               STARTUP_WAIT : boolean :=  FALSE;
               DCM_AUTOCALIBRATION : boolean :=  TRUE);
      -- synopsys translate_on
      port ( CLKIN    : in    std_logic; 
             CLKFB    : in    std_logic; 
             RST      : in    std_logic; 
             CLK0     : out   std_logic; 
             CLK90    : out   std_logic; 
             CLK180   : out   std_logic; 
             CLK270   : out   std_logic; 
             CLK2X    : out   std_logic; 
             CLK2X180 : out   std_logic; 
             CLKDV    : out   std_logic; 
             CLKFX    : out   std_logic; 
             CLKFX180 : out   std_logic; 
             LOCKED   : out   std_logic);
   end component;
   attribute CLK_FEEDBACK of DCM_BASE : component is "1X";
   attribute CLKDV_DIVIDE of DCM_BASE : component is "2.0";
   attribute CLKFX_DIVIDE of DCM_BASE : component is "1";
   attribute CLKFX_MULTIPLY of DCM_BASE : component is "4";
   attribute CLKIN_DIVIDE_BY_2 of DCM_BASE : component is "FALSE";
   attribute CLKIN_PERIOD of DCM_BASE : component is "10.0";
   attribute CLKOUT_PHASE_SHIFT of DCM_BASE : component is "NONE";
   attribute DCM_PERFORMANCE_MODE of DCM_BASE : component is "MAX_SPEED";
   attribute DESKEW_ADJUST of DCM_BASE : component is "SYSTEM_SYNCHRONOUS";
   attribute DFS_FREQUENCY_MODE of DCM_BASE : component is "LOW";
   attribute DLL_FREQUENCY_MODE of DCM_BASE : component is "LOW";
   attribute DUTY_CYCLE_CORRECTION of DCM_BASE : component is "TRUE";
   attribute FACTORY_JF of DCM_BASE : component is "F0F0";
   attribute PHASE_SHIFT of DCM_BASE : component is "0";
   attribute STARTUP_WAIT of DCM_BASE : component is "FALSE";
   attribute DCM_AUTOCALIBRATION of DCM_BASE : component is "TRUE";
   attribute BOX_TYPE of DCM_BASE : component is "BLACK_BOX";
   
   component BUFG
      port ( I : in    std_logic; 
             O : out   std_logic);
   end component;
   attribute BOX_TYPE of BUFG : component is "BLACK_BOX";
   
   component D4_16E_MXILINX_TOP_LEVEL
      port ( A0  : in    std_logic; 
             A1  : in    std_logic; 
             A2  : in    std_logic; 
             A3  : in    std_logic; 
             E   : in    std_logic; 
             D0  : out   std_logic; 
             D1  : out   std_logic; 
             D10 : out   std_logic; 
             D11 : out   std_logic; 
             D12 : out   std_logic; 
             D13 : out   std_logic; 
             D14 : out   std_logic; 
             D15 : out   std_logic; 
             D2  : out   std_logic; 
             D3  : out   std_logic; 
             D4  : out   std_logic; 
             D5  : out   std_logic; 
             D6  : out   std_logic; 
             D7  : out   std_logic; 
             D8  : out   std_logic; 
             D9  : out   std_logic);
   end component;
   
   component IBUFG
      port ( I : in    std_logic; 
             O : out   std_logic);
   end component;
   attribute IOSTANDARD of IBUFG : component is "DEFAULT";
   attribute CAPACITANCE of IBUFG : component is "DONT_CARE";
   attribute BOX_TYPE of IBUFG : component is "BLACK_BOX";
   
   component OBUF
      port ( I : in    std_logic; 
             O : out   std_logic);
   end component;
   attribute IOSTANDARD of OBUF : component is "DEFAULT";
   attribute CAPACITANCE of OBUF : component is "DONT_CARE";
   attribute SLEW of OBUF : component is "SLOW";
   attribute DRIVE of OBUF : component is "12";
   attribute BOX_TYPE of OBUF : component is "BLACK_BOX";
   
   component IBUF
      port ( I : in    std_logic; 
             O : out   std_logic);
   end component;
   attribute IOSTANDARD of IBUF : component is "DEFAULT";
   attribute CAPACITANCE of IBUF : component is "DONT_CARE";
   attribute BOX_TYPE of IBUF : component is "BLACK_BOX";
   
   component VERSION_BLK
      port ( version : out   std_logic_vector (7 downto 0));
   end component;
   
   component AND2B1
      port ( I0 : in    std_logic; 
             I1 : in    std_logic; 
             O  : out   std_logic);
   end component;
   attribute BOX_TYPE of AND2B1 : component is "BLACK_BOX";
   
   component MUX64_8
      port ( in0    : in    std_logic_vector (63 downto 0); 
             in1    : in    std_logic_vector (63 downto 0); 
             in2    : in    std_logic_vector (63 downto 0); 
             in3    : in    std_logic_vector (63 downto 0); 
             in4    : in    std_logic_vector (63 downto 0); 
             in5    : in    std_logic_vector (63 downto 0); 
             in6    : in    std_logic_vector (63 downto 0); 
             in7    : in    std_logic_vector (63 downto 0); 
             sel    : in    std_logic_vector (2 downto 0); 
             muxout : out   std_logic_vector (63 downto 0));
   end component;
   
   component IBUFGDS
      -- synopsys translate_off
      generic( DIFF_TERM : boolean :=  FALSE);
      -- synopsys translate_on
      port ( I  : in    std_logic; 
             IB : in    std_logic; 
             O  : out   std_logic);
   end component;
   attribute IOSTANDARD of IBUFGDS : component is "DEFAULT";
   attribute CAPACITANCE of IBUFGDS : component is "DONT_CARE";
   attribute DIFF_TERM of IBUFGDS : component is "FALSE";
   attribute BOX_TYPE of IBUFGDS : component is "BLACK_BOX";
   
   component FDRE
      generic( INIT : bit :=  '0');
      port ( C  : in    std_logic; 
             CE : in    std_logic; 
             D  : in    std_logic; 
             R  : in    std_logic; 
             Q  : out   std_logic);
   end component;
   attribute BOX_TYPE of FDRE : component is "BLACK_BOX";
   
   component XOR2
      port ( I0 : in    std_logic; 
             I1 : in    std_logic; 
             O  : out   std_logic);
   end component;
   attribute BOX_TYPE of XOR2 : component is "BLACK_BOX";
   
   component FD16RE_MXILINX_TOP_LEVEL
      port ( C  : in    std_logic; 
             CE : in    std_logic; 
             D  : in    std_logic_vector (15 downto 0); 
             R  : in    std_logic; 
             Q  : out   std_logic_vector (15 downto 0));
   end component;
   
   component IBUFDS
      -- synopsys translate_off
      generic( DIFF_TERM : boolean :=  FALSE);
      -- synopsys translate_on
      port ( I  : in    std_logic; 
             IB : in    std_logic; 
             O  : out   std_logic);
   end component;
   attribute IOSTANDARD of IBUFDS : component is "DEFAULT";
   attribute CAPACITANCE of IBUFDS : component is "DONT_CARE";
   attribute DIFF_TERM of IBUFDS : component is "FALSE";
   attribute BOX_TYPE of IBUFDS : component is "BLACK_BOX";
   
   component buffer_10bit
      port ( i : in    std_logic_vector (9 downto 0); 
             o : out   std_logic_vector (9 downto 0));
   end component;
   
   component BUF
      port ( I : in    std_logic; 
             O : out   std_logic);
   end component;
   attribute BOX_TYPE of BUF : component is "BLACK_BOX";
   
   component trigger_recv_blk
      port ( scin0  : in    std_logic; 
             scin1  : in    std_logic; 
             scin2  : in    std_logic; 
             scin3  : in    std_logic; 
             selCh0 : in    std_logic; 
             rst    : in    std_logic; 
             clk    : in    std_logic; 
             trig   : out   std_logic; 
             cnt    : out   std_logic_vector (31 downto 0));
   end component;
   
   component GND
      port ( G : out   std_logic);
   end component;
   attribute BOX_TYPE of GND : component is "BLACK_BOX";
   
   component ethernet_interface
      port ( reset_in       : in    std_logic; 
             b_force_packet : in    std_logic; 
             b_data_we      : in    std_logic; 
             MASTER_CLK     : in    std_logic; 
             slow_clk       : in    std_logic; 
             PHY_RX_DV      : in    std_logic; 
             PHY_RX_ER      : in    std_logic; 
             tx_data        : in    std_logic_vector (63 downto 0); 
             b_data         : in    std_logic_vector (63 downto 0); 
             PHY_RXD        : in    std_logic_vector (7 downto 0); 
             reset_out      : out   std_logic; 
             rx_wren        : out   std_logic; 
             b_enable       : out   std_logic; 
             TX_CLK         : out   std_logic; 
             PHY_TX_EN      : out   std_logic; 
             PHY_TX_ER      : out   std_logic; 
             rx_addr        : out   std_logic_vector (31 downto 0); 
             rx_data        : out   std_logic_vector (63 downto 0); 
             PHY_TXD        : out   std_logic_vector (7 downto 0); 
             user_addr      : in    std_logic_vector (7 downto 0));
   end component;
   
   component INV
      port ( I : in    std_logic; 
             O : out   std_logic);
   end component;
   attribute BOX_TYPE of INV : component is "BLACK_BOX";
   
   component FD8RE_MXILINX_TOP_LEVEL
      port ( C  : in    std_logic; 
             CE : in    std_logic; 
             D  : in    std_logic_vector (7 downto 0); 
             R  : in    std_logic; 
             Q  : out   std_logic_vector (7 downto 0));
   end component;
   
   component data_send
      port ( rst                      : in    std_logic; 
             clk                      : in    std_logic; 
             new_trigger              : in    std_logic; 
             data_in                  : in    std_logic_vector (63 downto 0); 
             trigger_addr             : in    std_logic_vector (9 downto 0); 
             ram_addr                 : in    std_logic_vector (9 downto 0); 
             user_sample_size         : in    std_logic_vector (15 downto 0); 
             user_pretrig_sample_size : in    std_logic_vector (15 downto 0); 
             user_positive_delay      : in    std_logic_vector (15 downto 0); 
             debug_signals            : in    std_logic_vector (7 downto 0); 
             signal_ID                : in    std_logic_vector (3 downto 0); 
             header                   : in    std_logic_vector (59 downto 0); 
             b_data_we                : out   std_logic; 
             b_force_packet           : out   std_logic; 
             b_data                   : out   std_logic_vector (63 downto 0); 
             clock_enable             : in    std_logic);
   end component;
   
   component ClockLatchSignals
      port ( clk     : in    std_logic; 
             rst     : in    std_logic; 
             signals : out   std_logic_vector (7 downto 0));
   end component;
   
   component ADC_FIFO
      port ( wr_clk   : in    std_logic; 
             din      : in    std_logic_vector (15 downto 0); 
             wr_en    : in    std_logic; 
             full     : out   std_logic; 
             overflow : out   std_logic; 
             rd_clk   : in    std_logic; 
             dout     : out   std_logic_vector (63 downto 0); 
             rd_en    : in    std_logic; 
             empty    : out   std_logic; 
             valid    : out   std_logic);
   end component;
   
   component VCC
      port ( P : out   std_logic);
   end component;
   attribute BOX_TYPE of VCC : component is "BLACK_BOX";
   
   component PeakFinder
      port ( clk               : in    std_logic; 
             reset             : in    std_logic; 
             clock_enable      : in    std_logic; 
             manual_force_trig : in    std_logic; 
             ext_trig          : in    std_logic; 
             data_in           : in    std_logic_vector (63 downto 0); 
             trig_types        : in    std_logic_vector (7 downto 0); 
             signal_threshold  : in    std_logic_vector (7 downto 0); 
             new_trigger       : out   std_logic; 
             out_enable        : out   std_logic; 
             clear_manual_trig : out   std_logic; 
             data_out          : out   std_logic_vector (63 downto 0); 
             addr_out          : out   std_logic_vector (9 downto 0); 
             trigger_address   : out   std_logic_vector (9 downto 0); 
             median_filter     : in    std_logic);
   end component;
   
   component EthernetRAM
      port ( addra : in    std_logic_vector (9 downto 0); 
             dina  : in    std_logic_vector (63 downto 0); 
             wea   : in    std_logic_vector (0 downto 0); 
             clka  : in    std_logic; 
             douta : out   std_logic_vector (63 downto 0));
   end component;
   
   component FDCE
      generic( INIT : bit :=  '0');
      port ( C   : in    std_logic; 
             CE  : in    std_logic; 
             CLR : in    std_logic; 
             D   : in    std_logic; 
             Q   : out   std_logic);
   end component;
   attribute BOX_TYPE of FDCE : component is "BLACK_BOX";
   
   component event_analysis
      port ( clk                    : in    std_logic; 
             reset                  : in    std_logic; 
             data_in_we             : in    std_logic; 
             data_in_end            : in    std_logic; 
             clear_veto             : in    std_logic; 
             force_veto             : in    std_logic; 
             veto_en                : in    std_logic; 
             data_in                : in    std_logic_vector (63 downto 0); 
             footer_in              : in    std_logic_vector (63 downto 0); 
             zero_cross_thresh_high : in    std_logic_vector (7 downto 0); 
             zero_cross_thresh_low  : in    std_logic_vector (7 downto 0); 
             zero_cross_veto_thresh : in    std_logic_vector (7 downto 0); 
             data_out_we            : out   std_logic; 
             data_out_end           : out   std_logic; 
             veto                   : out   std_logic; 
             reset_clear_veto       : out   std_logic; 
             reset_force_veto       : out   std_logic; 
             data_out               : out   std_logic_vector (63 downto 0); 
             zero_cross_count       : out   std_logic_vector (7 downto 0); 
             clock_enable           : in    std_logic);
   end component;
   
   component OBUF8_MXILINX_TOP_LEVEL
      port ( I : in    std_logic_vector (7 downto 0); 
             O : out   std_logic_vector (7 downto 0));
   end component;
   
   component ext_ip_addr_map
      port ( ext_ip_addr : in    std_logic_vector (7 downto 0); 
             ip_addr_out : out   std_logic_vector (7 downto 0));
   end component;
   
   component FD
      generic( INIT : bit :=  '0');
      port ( C : in    std_logic; 
             D : in    std_logic; 
             Q : out   std_logic);
   end component;
   attribute BOX_TYPE of FD : component is "BLACK_BOX";
   
   attribute DDR_CLK_EDGE of ADC_IDDR_0 : label is "SAME_EDGE_PIPELINED";
   attribute DDR_CLK_EDGE of ADC_IDDR_1 : label is "SAME_EDGE_PIPELINED";
   attribute DDR_CLK_EDGE of ADC_IDDR_2 : label is "SAME_EDGE_PIPELINED";
   attribute DDR_CLK_EDGE of ADC_IDDR_3 : label is "SAME_EDGE_PIPELINED";
   attribute DDR_CLK_EDGE of ADC_IDDR_4 : label is "SAME_EDGE_PIPELINED";
   attribute DDR_CLK_EDGE of ADC_IDDR_5 : label is "SAME_EDGE_PIPELINED";
   attribute DDR_CLK_EDGE of ADC_IDDR_6 : label is "SAME_EDGE_PIPELINED";
   attribute DDR_CLK_EDGE of ADC_IDDR_7 : label is "SAME_EDGE_PIPELINED";
   attribute DDR_CLK_EDGE of ADC_IDDR_8 : label is "SAME_EDGE_PIPELINED";
   attribute DDR_CLK_EDGE of ADC_IDDR_9 : label is "SAME_EDGE_PIPELINED";
   attribute DDR_CLK_EDGE of ADC_IDDR_10 : label is "SAME_EDGE_PIPELINED";
   attribute DDR_CLK_EDGE of ADC_IDDR_11 : label is "SAME_EDGE_PIPELINED";
   attribute DDR_CLK_EDGE of ADC_IDDR_12 : label is "SAME_EDGE_PIPELINED";
   attribute DDR_CLK_EDGE of ADC_IDDR_13 : label is "SAME_EDGE_PIPELINED";
   attribute DDR_CLK_EDGE of ADC_IDDR_14 : label is "SAME_EDGE_PIPELINED";
   attribute DDR_CLK_EDGE of ADC_IDDR_15 : label is "SAME_EDGE_PIPELINED";
   attribute HU_SET of fadc_data_mux_0 : label is "fadc_data_mux_0_30";
   attribute HU_SET of fadc_data_mux_1 : label is "fadc_data_mux_1_29";
   attribute HU_SET of fadc_data_mux_2 : label is "fadc_data_mux_2_28";
   attribute HU_SET of fadc_data_mux_3 : label is "fadc_data_mux_3_27";
   attribute HU_SET of fadc_data_mux_4 : label is "fadc_data_mux_4_26";
   attribute HU_SET of fadc_data_mux_5 : label is "fadc_data_mux_5_25";
   attribute HU_SET of fadc_data_mux_6 : label is "fadc_data_mux_6_24";
   attribute HU_SET of fadc_data_mux_7 : label is "fadc_data_mux_7_23";
   attribute HU_SET of fadc_data_mux_8 : label is "fadc_data_mux_8_22";
   attribute HU_SET of fadc_data_mux_9 : label is "fadc_data_mux_9_21";
   attribute HU_SET of fadc_data_mux_10 : label is "fadc_data_mux_10_20";
   attribute HU_SET of fadc_data_mux_11 : label is "fadc_data_mux_11_19";
   attribute HU_SET of fadc_data_mux_12 : label is "fadc_data_mux_12_18";
   attribute HU_SET of fadc_data_mux_13 : label is "fadc_data_mux_13_17";
   attribute HU_SET of fadc_data_mux_14 : label is "fadc_data_mux_14_16";
   attribute HU_SET of fadc_data_mux_15 : label is "fadc_data_mux_15_15";
   attribute IOBDELAY_TYPE of XLXI_3405 : label is "VARIABLE";
   attribute CLKIN_PERIOD of XLXI_3410 : label is "8.0";
   attribute CLKFX_MULTIPLY of XLXI_3410 : label is "8";
   attribute CLKFX_DIVIDE of XLXI_3410 : label is "5";
   attribute HU_SET of XLXI_3432 : label is "XLXI_3432_0";
   attribute DIFF_TERM of XLXI_5943 : label is "TRUE";
   attribute CAPACITANCE of XLXI_5943 : label is "LOW";
   attribute CLKIN_PERIOD of XLXI_5949 : label is "8.0";
   attribute CLKFX_MULTIPLY of XLXI_5949 : label is "3";
   attribute CLKFX_DIVIDE of XLXI_5949 : label is "2";
   attribute DLL_FREQUENCY_MODE of XLXI_5953 : label is "HIGH";
   attribute DFS_FREQUENCY_MODE of XLXI_5953 : label is "HIGH";
   attribute CLKIN_PERIOD of XLXI_5953 : label is "5.33333333";
   attribute DLL_FREQUENCY_MODE of XLXI_5963 : label is "HIGH";
   attribute DFS_FREQUENCY_MODE of XLXI_5963 : label is "HIGH";
   attribute CLKIN_PERIOD of XLXI_5963 : label is "2.66666667";
   attribute SLEW of XLXI_5996 : label is "FAST";
   attribute SLEW of XLXI_5999 : label is "FAST";
   attribute HU_SET of XLXI_6004 : label is "XLXI_6004_1";
   attribute SLEW of XLXI_6041 : label is "FAST";
   attribute HU_SET of XLXI_6051 : label is "XLXI_6051_2";
   attribute HU_SET of XLXI_6056 : label is "XLXI_6056_3";
   attribute HU_SET of XLXI_6057 : label is "XLXI_6057_4";
   attribute DIFF_TERM of XLXI_6074 : label is "TRUE";
   attribute SLEW of XLXI_6116 : label is "FAST";
   attribute SLEW of XLXI_6120 : label is "FAST";
   attribute SLEW of XLXI_6121 : label is "FAST";
   attribute SLEW of XLXI_6122 : label is "FAST";
   attribute SLEW of XLXI_6123 : label is "FAST";
   attribute DIFF_TERM of XLXI_6140 : label is "TRUE";
   attribute DIFF_TERM of XLXI_6150 : label is "TRUE";
   attribute DIFF_TERM of XLXI_6151 : label is "TRUE";
   attribute DIFF_TERM of XLXI_6152 : label is "TRUE";
   attribute DIFF_TERM of XLXI_6153 : label is "TRUE";
   attribute DIFF_TERM of XLXI_6154 : label is "TRUE";
   attribute DIFF_TERM of XLXI_6155 : label is "TRUE";
   attribute DIFF_TERM of XLXI_6156 : label is "TRUE";
   attribute DIFF_TERM of XLXI_6165 : label is "TRUE";
   attribute DIFF_TERM of XLXI_6166 : label is "TRUE";
   attribute DIFF_TERM of XLXI_6167 : label is "TRUE";
   attribute DIFF_TERM of XLXI_6168 : label is "TRUE";
   attribute DIFF_TERM of XLXI_6169 : label is "TRUE";
   attribute DIFF_TERM of XLXI_6170 : label is "TRUE";
   attribute DIFF_TERM of XLXI_6171 : label is "TRUE";
   attribute DIFF_TERM of XLXI_6172 : label is "TRUE";
   attribute DIFF_TERM of XLXI_6181 : label is "TRUE";
   attribute DIFF_TERM of XLXI_6182 : label is "TRUE";
   attribute DIFF_TERM of XLXI_6183 : label is "TRUE";
   attribute DLL_FREQUENCY_MODE of XLXI_6199 : label is "HIGH";
   attribute DFS_FREQUENCY_MODE of XLXI_6199 : label is "HIGH";
   attribute CLKIN_PERIOD of XLXI_6199 : label is "5.33333333";
   attribute HU_SET of XLXI_6247 : label is "XLXI_6247_6";
   attribute HU_SET of XLXI_6251 : label is "XLXI_6251_5";
   attribute HU_SET of XLXI_6394 : label is "XLXI_6394_7";
   attribute HU_SET of XLXI_6410 : label is "XLXI_6410_8";
   attribute HU_SET of XLXI_6414 : label is "XLXI_6414_9";
   attribute HU_SET of XLXI_6418 : label is "XLXI_6418_10";
   attribute HU_SET of XLXI_6419 : label is "XLXI_6419_11";
   attribute HU_SET of XLXI_6420 : label is "XLXI_6420_13";
   attribute HU_SET of XLXI_6435 : label is "XLXI_6435_12";
   attribute HU_SET of XLXI_6465 : label is "XLXI_6465_14";
begin
   ADC_IDDR_0 : IDDR
   -- synopsys translate_off
   generic map( DDR_CLK_EDGE => "SAME_EDGE_PIPELINED")
   -- synopsys translate_on
      port map (C=>FADC_DCLK,
                CE=>XLXN_16002,
                D=>fadc_data_in(0),
                R=>XLXN_16004,
                S=>XLXN_16003,
                Q1=>fadc_latched_in_rise(0),
                Q2=>fadc_latched_in_fall(0));
   
   ADC_IDDR_1 : IDDR
   -- synopsys translate_off
   generic map( DDR_CLK_EDGE => "SAME_EDGE_PIPELINED")
   -- synopsys translate_on
      port map (C=>FADC_DCLK,
                CE=>XLXN_16002,
                D=>fadc_data_in(1),
                R=>XLXN_16004,
                S=>XLXN_16003,
                Q1=>fadc_latched_in_rise(1),
                Q2=>fadc_latched_in_fall(1));
   
   ADC_IDDR_2 : IDDR
   -- synopsys translate_off
   generic map( DDR_CLK_EDGE => "SAME_EDGE_PIPELINED")
   -- synopsys translate_on
      port map (C=>FADC_DCLK,
                CE=>XLXN_16002,
                D=>fadc_data_in(2),
                R=>XLXN_16004,
                S=>XLXN_16003,
                Q1=>fadc_latched_in_rise(2),
                Q2=>fadc_latched_in_fall(2));
   
   ADC_IDDR_3 : IDDR
   -- synopsys translate_off
   generic map( DDR_CLK_EDGE => "SAME_EDGE_PIPELINED")
   -- synopsys translate_on
      port map (C=>FADC_DCLK,
                CE=>XLXN_16002,
                D=>fadc_data_in(3),
                R=>XLXN_16004,
                S=>XLXN_16003,
                Q1=>fadc_latched_in_rise(3),
                Q2=>fadc_latched_in_fall(3));
   
   ADC_IDDR_4 : IDDR
   -- synopsys translate_off
   generic map( DDR_CLK_EDGE => "SAME_EDGE_PIPELINED")
   -- synopsys translate_on
      port map (C=>FADC_DCLK,
                CE=>XLXN_16002,
                D=>fadc_data_in(4),
                R=>XLXN_16004,
                S=>XLXN_16003,
                Q1=>fadc_latched_in_rise(4),
                Q2=>fadc_latched_in_fall(4));
   
   ADC_IDDR_5 : IDDR
   -- synopsys translate_off
   generic map( DDR_CLK_EDGE => "SAME_EDGE_PIPELINED")
   -- synopsys translate_on
      port map (C=>FADC_DCLK,
                CE=>XLXN_16002,
                D=>fadc_data_in(5),
                R=>XLXN_16004,
                S=>XLXN_16003,
                Q1=>fadc_latched_in_rise(5),
                Q2=>fadc_latched_in_fall(5));
   
   ADC_IDDR_6 : IDDR
   -- synopsys translate_off
   generic map( DDR_CLK_EDGE => "SAME_EDGE_PIPELINED")
   -- synopsys translate_on
      port map (C=>FADC_DCLK,
                CE=>XLXN_16002,
                D=>fadc_data_in(6),
                R=>XLXN_16004,
                S=>XLXN_16003,
                Q1=>fadc_latched_in_rise(6),
                Q2=>fadc_latched_in_fall(6));
   
   ADC_IDDR_7 : IDDR
   -- synopsys translate_off
   generic map( DDR_CLK_EDGE => "SAME_EDGE_PIPELINED")
   -- synopsys translate_on
      port map (C=>FADC_DCLK,
                CE=>XLXN_16002,
                D=>fadc_data_in(7),
                R=>XLXN_16004,
                S=>XLXN_16003,
                Q1=>fadc_latched_in_rise(7),
                Q2=>fadc_latched_in_fall(7));
   
   ADC_IDDR_8 : IDDR
   -- synopsys translate_off
   generic map( DDR_CLK_EDGE => "SAME_EDGE_PIPELINED")
   -- synopsys translate_on
      port map (C=>FADC_DCLK,
                CE=>XLXN_16002,
                D=>fadc_data_in(8),
                R=>XLXN_16004,
                S=>XLXN_16003,
                Q1=>fadc_latched_in_rise(8),
                Q2=>fadc_latched_in_fall(8));
   
   ADC_IDDR_9 : IDDR
   -- synopsys translate_off
   generic map( DDR_CLK_EDGE => "SAME_EDGE_PIPELINED")
   -- synopsys translate_on
      port map (C=>FADC_DCLK,
                CE=>XLXN_16002,
                D=>fadc_data_in(9),
                R=>XLXN_16004,
                S=>XLXN_16003,
                Q1=>fadc_latched_in_rise(9),
                Q2=>fadc_latched_in_fall(9));
   
   ADC_IDDR_10 : IDDR
   -- synopsys translate_off
   generic map( DDR_CLK_EDGE => "SAME_EDGE_PIPELINED")
   -- synopsys translate_on
      port map (C=>FADC_DCLK,
                CE=>XLXN_16002,
                D=>fadc_data_in(10),
                R=>XLXN_16004,
                S=>XLXN_16003,
                Q1=>fadc_latched_in_rise(10),
                Q2=>fadc_latched_in_fall(10));
   
   ADC_IDDR_11 : IDDR
   -- synopsys translate_off
   generic map( DDR_CLK_EDGE => "SAME_EDGE_PIPELINED")
   -- synopsys translate_on
      port map (C=>FADC_DCLK,
                CE=>XLXN_16002,
                D=>fadc_data_in(11),
                R=>XLXN_16004,
                S=>XLXN_16003,
                Q1=>fadc_latched_in_rise(11),
                Q2=>fadc_latched_in_fall(11));
   
   ADC_IDDR_12 : IDDR
   -- synopsys translate_off
   generic map( DDR_CLK_EDGE => "SAME_EDGE_PIPELINED")
   -- synopsys translate_on
      port map (C=>FADC_DCLK,
                CE=>XLXN_16002,
                D=>fadc_data_in(12),
                R=>XLXN_16004,
                S=>XLXN_16003,
                Q1=>fadc_latched_in_rise(12),
                Q2=>fadc_latched_in_fall(12));
   
   ADC_IDDR_13 : IDDR
   -- synopsys translate_off
   generic map( DDR_CLK_EDGE => "SAME_EDGE_PIPELINED")
   -- synopsys translate_on
      port map (C=>FADC_DCLK,
                CE=>XLXN_16002,
                D=>fadc_data_in(13),
                R=>XLXN_16004,
                S=>XLXN_16003,
                Q1=>fadc_latched_in_rise(13),
                Q2=>fadc_latched_in_fall(13));
   
   ADC_IDDR_14 : IDDR
   -- synopsys translate_off
   generic map( DDR_CLK_EDGE => "SAME_EDGE_PIPELINED")
   -- synopsys translate_on
      port map (C=>FADC_DCLK,
                CE=>XLXN_16002,
                D=>fadc_data_in(14),
                R=>XLXN_16004,
                S=>XLXN_16003,
                Q1=>fadc_latched_in_rise(14),
                Q2=>fadc_latched_in_fall(14));
   
   ADC_IDDR_15 : IDDR
   -- synopsys translate_off
   generic map( DDR_CLK_EDGE => "SAME_EDGE_PIPELINED")
   -- synopsys translate_on
      port map (C=>FADC_DCLK,
                CE=>XLXN_16002,
                D=>fadc_data_in(15),
                R=>XLXN_16004,
                S=>XLXN_16003,
                Q1=>fadc_latched_in_rise(15),
                Q2=>fadc_latched_in_fall(15));
   
   fadc_data_mux_0 : M2_1_MXILINX_TOP_LEVEL
      port map (D0=>fadc_latched_in_rise(0),
                D1=>fadc_latched_in_fall(0),
                S0=>fadc_data_edge_sel(0),
                O=>fadc_latched_in(0));
   
   fadc_data_mux_1 : M2_1_MXILINX_TOP_LEVEL
      port map (D0=>fadc_latched_in_rise(1),
                D1=>fadc_latched_in_fall(1),
                S0=>fadc_data_edge_sel(1),
                O=>fadc_latched_in(1));
   
   fadc_data_mux_2 : M2_1_MXILINX_TOP_LEVEL
      port map (D0=>fadc_latched_in_rise(2),
                D1=>fadc_latched_in_fall(2),
                S0=>fadc_data_edge_sel(2),
                O=>fadc_latched_in(2));
   
   fadc_data_mux_3 : M2_1_MXILINX_TOP_LEVEL
      port map (D0=>fadc_latched_in_rise(3),
                D1=>fadc_latched_in_fall(3),
                S0=>fadc_data_edge_sel(3),
                O=>fadc_latched_in(3));
   
   fadc_data_mux_4 : M2_1_MXILINX_TOP_LEVEL
      port map (D0=>fadc_latched_in_rise(4),
                D1=>fadc_latched_in_fall(4),
                S0=>fadc_data_edge_sel(4),
                O=>fadc_latched_in(4));
   
   fadc_data_mux_5 : M2_1_MXILINX_TOP_LEVEL
      port map (D0=>fadc_latched_in_rise(5),
                D1=>fadc_latched_in_fall(5),
                S0=>fadc_data_edge_sel(5),
                O=>fadc_latched_in(5));
   
   fadc_data_mux_6 : M2_1_MXILINX_TOP_LEVEL
      port map (D0=>fadc_latched_in_rise(6),
                D1=>fadc_latched_in_fall(6),
                S0=>fadc_data_edge_sel(6),
                O=>fadc_latched_in(6));
   
   fadc_data_mux_7 : M2_1_MXILINX_TOP_LEVEL
      port map (D0=>fadc_latched_in_rise(7),
                D1=>fadc_latched_in_fall(7),
                S0=>fadc_data_edge_sel(7),
                O=>fadc_latched_in(7));
   
   fadc_data_mux_8 : M2_1_MXILINX_TOP_LEVEL
      port map (D0=>fadc_latched_in_rise(8),
                D1=>fadc_latched_in_fall(8),
                S0=>fadc_data_edge_sel(8),
                O=>fadc_latched_in(8));
   
   fadc_data_mux_9 : M2_1_MXILINX_TOP_LEVEL
      port map (D0=>fadc_latched_in_rise(9),
                D1=>fadc_latched_in_fall(9),
                S0=>fadc_data_edge_sel(9),
                O=>fadc_latched_in(9));
   
   fadc_data_mux_10 : M2_1_MXILINX_TOP_LEVEL
      port map (D0=>fadc_latched_in_rise(10),
                D1=>fadc_latched_in_fall(10),
                S0=>fadc_data_edge_sel(10),
                O=>fadc_latched_in(10));
   
   fadc_data_mux_11 : M2_1_MXILINX_TOP_LEVEL
      port map (D0=>fadc_latched_in_rise(11),
                D1=>fadc_latched_in_fall(11),
                S0=>fadc_data_edge_sel(11),
                O=>fadc_latched_in(11));
   
   fadc_data_mux_12 : M2_1_MXILINX_TOP_LEVEL
      port map (D0=>fadc_latched_in_rise(12),
                D1=>fadc_latched_in_fall(12),
                S0=>fadc_data_edge_sel(12),
                O=>fadc_latched_in(12));
   
   fadc_data_mux_13 : M2_1_MXILINX_TOP_LEVEL
      port map (D0=>fadc_latched_in_rise(13),
                D1=>fadc_latched_in_fall(13),
                S0=>fadc_data_edge_sel(13),
                O=>fadc_latched_in(13));
   
   fadc_data_mux_14 : M2_1_MXILINX_TOP_LEVEL
      port map (D0=>fadc_latched_in_rise(14),
                D1=>fadc_latched_in_fall(14),
                S0=>fadc_data_edge_sel(14),
                O=>fadc_latched_in(14));
   
   fadc_data_mux_15 : M2_1_MXILINX_TOP_LEVEL
      port map (D0=>fadc_latched_in_rise(15),
                D1=>fadc_latched_in_fall(15),
                S0=>fadc_data_edge_sel(15),
                O=>fadc_latched_in(15));
   
   XLXI_3405 : IDELAY
   -- synopsys translate_off
   generic map( IOBDELAY_TYPE => "VARIABLE",
            IOBDELAY_VALUE => 0)
   -- synopsys translate_on
      port map (C=>MASTER_CLK,
                CE=>fadc_data_del_ce,
                I=>fadc_dclk_in,
                INC=>rx_data(0),
                RST=>fadc_data_del_rst,
                O=>XLXN_15075);
   
   XLXI_3406 : IDELAYCTRL
      port map (REFCLK=>XLXN_15064,
                RST=>reset,
                RDY=>debug_signals(4));
   
   XLXI_3409 : AND2
      port map (I0=>rx_data(4),
                I1=>fadc_data_del_ce,
                O=>fadc_data_del_rst);
   
   XLXI_3410 : DCM_BASE
   -- synopsys translate_off
   generic map( CLKIN_PERIOD => 8.0,
            CLKFX_MULTIPLY => 8,
            CLKFX_DIVIDE => 5)
   -- synopsys translate_on
      port map (CLKFB=>XLXN_12229,
                CLKIN=>MASTER_CLK,
                RST=>reset,
                CLKDV=>open,
                CLKFX=>XLXN_12257,
                CLKFX180=>open,
                CLK0=>XLXN_12220,
                CLK2X=>open,
                CLK2X180=>open,
                CLK90=>open,
                CLK180=>open,
                CLK270=>open,
                LOCKED=>open);
   
   XLXI_3411 : BUFG
      port map (I=>XLXN_12220,
                O=>XLXN_12229);
   
   XLXI_3432 : D4_16E_MXILINX_TOP_LEVEL
      port map (A0=>rx_addr(8),
                A1=>rx_addr(9),
                A2=>rx_addr(10),
                A3=>rx_addr(11),
                E=>XLXN_12617,
                D0=>DCM_RESET_MAP,
                D1=>FADC_MAP,
                D2=>FADC_CTRL_MAP,
                D3=>FADC_DELAY_MAP,
                D4=>TRIG_MAP,
                D5=>TRIG_ATTRIBUTES_MAP,
                D6=>MANUAL_TRIG_MAP,
                D7=>GLOBAL_RESET_MAP,
                D8=>EVENT_MAP,
                D9=>open,
                D10=>FADC_DATA_EDGE_MAP,
                D11=>MEDIAN_FILTER_MAP,
                D12=>open,
                D13=>open,
                D14=>open,
                D15=>open);
   
   XLXI_4136 : IBUFG
      port map (I=>SECONDARY_CLK,
                O=>clock_5mhz);
   
   XLXI_4177 : OBUF
      port map (I=>PHY_TXEN_sig,
                O=>BUSC_27DN_55S);
   
   XLXI_4178 : IBUF
      port map (I=>BUSC_27DP_54S,
                O=>GMII_RX_DV_0_sig);
   
   XLXI_4179 : OBUF
      port map (I=>GTX_CLK_0_sig,
                O=>BUSC_26DN_53S);
   
   XLXI_4181 : OBUF
      port map (I=>PHY_TXD_sig(3),
                O=>BUSC_24DP_48S);
   
   XLXI_4182 : OBUF
      port map (I=>PHY_TXD_sig(2),
                O=>BUSC_24DN_49S);
   
   XLXI_4183 : OBUF
      port map (I=>PHY_TXD_sig(1),
                O=>BUSC_25DP_50S);
   
   XLXI_4184 : OBUF
      port map (I=>PHY_TXD_sig(0),
                O=>BUSC_25DN_51S);
   
   XLXI_4213 : IBUF
      port map (I=>BUSC_20DP_40S,
                O=>GMII_RXD_0_sig(7));
   
   XLXI_4214 : IBUF
      port map (I=>BUSC_20DN_41S,
                O=>GMII_RXD_0_sig(6));
   
   XLXI_4216 : IBUF
      port map (I=>BUSC_19DP_38S,
                O=>GMII_RXD_0_sig(5));
   
   XLXI_4217 : IBUF
      port map (I=>BUSC_19DN_39S,
                O=>GMII_RXD_0_sig(4));
   
   XLXI_4218 : IBUF
      port map (I=>BUSC_18DP_36S,
                O=>GMII_RXD_0_sig(3));
   
   XLXI_4219 : IBUF
      port map (I=>BUSC_18DN_37S,
                O=>GMII_RXD_0_sig(2));
   
   XLXI_4220 : IBUF
      port map (I=>BUSC_17DP_34S,
                O=>GMII_RXD_0_sig(1));
   
   XLXI_4221 : IBUF
      port map (I=>BUSC_17DN_35S,
                O=>GMII_RXD_0_sig(0));
   
   XLXI_4246 : OBUF
      port map (I=>PHY_TXER_sig,
                O=>BUSC_16DN_33S);
   
   XLXI_4247 : OBUF
      port map (I=>PHY_TXD_sig(4),
                O=>BUSC_15DN_31S);
   
   XLXI_4248 : IBUF
      port map (I=>BUSC_16DP_32S,
                O=>GMII_RX_ER_0_sig);
   
   XLXI_4249 : OBUF
      port map (I=>PHY_TXD_sig(5),
                O=>BUSC_15DP_30S);
   
   XLXI_4250 : OBUF
      port map (I=>PHY_TXD_sig(6),
                O=>BUSC_14DN_29S);
   
   XLXI_4251 : OBUF
      port map (I=>PHY_TXD_sig(7),
                O=>BUSC_14DP_28S);
   
   XLXI_4253 : IBUFG
      port map (I=>GEL_RXCLK,
                O=>MASTER_CLK);
   
   XLXI_4359 : VERSION_BLK
      port map (version(7 downto 0)=>psi_status(63 downto 56));
   
   XLXI_4466 : AND2
      port map (I0=>rx_data(24),
                I1=>FADC_DELAY_MAP,
                O=>fadc_data_del_ce);
   
   XLXI_4529 : BUFG
      port map (I=>XLXN_12257,
                O=>XLXN_15064);
   
   XLXI_4697 : AND2B1
      port map (I0=>rx_addr(12),
                I1=>rx_wren,
                O=>XLXN_12617);
   
   XLXI_5338 : MUX64_8
      port map (in0(63 downto 0)=>psi_status(63 downto 0),
                in1(63 downto 0)=>fadc_debug(63 downto 0),
                in2(63 downto 0)=>trig_debug(63 downto 0),
                in3(63 downto 0)=>debug_signals(63 downto 0),
                in4(63 downto 0)=>XLXI_5338_in4_openSignal(63 downto 0),
                in5(63 downto 0)=>XLXI_5338_in5_openSignal(63 downto 0),
                in6(63 downto 0)=>XLXI_5338_in6_openSignal(63 downto 0),
                in7(63 downto 0)=>XLXI_5338_in7_openSignal(63 downto 0),
                sel(2 downto 0)=>rx_addr(10 downto 8),
                muxout(63 downto 0)=>tx_data(63 downto 0));
   
   XLXI_5932 : OBUF
      port map (I=>FADC_RST,
                O=>GENERAL_12DN_25S);
   
   XLXI_5934 : OBUF
      port map (I=>FADC_CAL,
                O=>GENERAL_12DP_24S);
   
   XLXI_5943 : IBUFGDS
   -- synopsys translate_off
   generic map( DIFF_TERM => TRUE)
   -- synopsys translate_on
      port map (I=>BUSBHS_02DP_04S,
                IB=>BUSBHS_02DN_05S,
                O=>fadc_dclk_in);
   
   XLXI_5949 : DCM_BASE
   -- synopsys translate_off
   generic map( CLKIN_PERIOD => 8.0,
            CLKFX_MULTIPLY => 3,
            CLKFX_DIVIDE => 2)
   -- synopsys translate_on
      port map (CLKFB=>XLXN_12661,
                CLKIN=>MASTER_CLK,
                RST=>dcm_reset_0,
                CLKDV=>open,
                CLKFX=>XLXN_12669,
                CLKFX180=>open,
                CLK0=>XLXN_12660,
                CLK2X=>open,
                CLK2X180=>open,
                CLK90=>open,
                CLK180=>open,
                CLK270=>open,
                LOCKED=>debug_signals(0));
   
   XLXI_5950 : BUFG
      port map (I=>XLXN_12660,
                O=>XLXN_12661);
   
   XLXI_5951 : FDRE
      port map (C=>MASTER_CLK,
                CE=>DCM_RESET_MAP,
                D=>rx_data(0),
                R=>reset,
                Q=>dcm_reset_0);
   
   XLXI_5952 : BUFG
      port map (I=>XLXN_12669,
                O=>CLK_187_5);
   
   XLXI_5953 : DCM_BASE
   -- synopsys translate_off
   generic map( DLL_FREQUENCY_MODE => "HIGH",
            DFS_FREQUENCY_MODE => "HIGH",
            CLKIN_PERIOD => 5.33333333)
   -- synopsys translate_on
      port map (CLKFB=>XLXN_12672,
                CLKIN=>CLK_187_5,
                RST=>dcm_reset_1,
                CLKDV=>open,
                CLKFX=>open,
                CLKFX180=>open,
                CLK0=>XLXN_12671,
                CLK2X=>XLXN_12781,
                CLK2X180=>open,
                CLK90=>open,
                CLK180=>open,
                CLK270=>open,
                LOCKED=>debug_signals(1));
   
   XLXI_5954 : BUFG
      port map (I=>XLXN_12671,
                O=>XLXN_12672);
   
   XLXI_5955 : FDRE
      port map (C=>MASTER_CLK,
                CE=>DCM_RESET_MAP,
                D=>rx_data(4),
                R=>reset,
                Q=>dcm_reset_1);
   
   XLXI_5963 : DCM_BASE
   -- synopsys translate_off
   generic map( DLL_FREQUENCY_MODE => "HIGH",
            DFS_FREQUENCY_MODE => "HIGH",
            CLKIN_PERIOD => 2.66666667)
   -- synopsys translate_on
      port map (CLKFB=>XLXN_12923,
                CLKIN=>CLK_MUX,
                RST=>dcm_reset_2,
                CLKDV=>open,
                CLKFX=>open,
                CLKFX180=>open,
                CLK0=>FADC_sampling_clk_xor0,
                CLK2X=>open,
                CLK2X180=>open,
                CLK90=>FADC_sampling_clk_xor1,
                CLK180=>XLXN_12930,
                CLK270=>XLXN_12931,
                LOCKED=>debug_signals(2));
   
   XLXI_5964 : BUFG
      port map (I=>FADC_sampling_clk_xor0,
                O=>XLXN_12923);
   
   XLXI_5965 : XOR2
      port map (I0=>FADC_sampling_clk_xor1,
                I1=>FADC_sampling_clk_xor0,
                O=>FADC_CLK_P);
   
   XLXI_5967 : FDRE
      port map (C=>MASTER_CLK,
                CE=>DCM_RESET_MAP,
                D=>rx_data(8),
                R=>reset,
                Q=>dcm_reset_2);
   
   XLXI_5993 : BUFG
      port map (I=>XLXN_12781,
                O=>CLK_375);
   
   XLXI_5996 : OBUF
      port map (I=>FADC_CLK_N,
                O=>BUSBHS_03DN_07S);
   
   XLXI_5999 : OBUF
      port map (I=>FADC_CLK_P,
                O=>BUSBHS_03DP_06S);
   
   XLXI_6004 : M2_1_MXILINX_TOP_LEVEL
      port map (D0=>CLK_187_5,
                D1=>CLK_375,
                S0=>dcm_mux_sel,
                O=>XLXN_16009);
   
   XLXI_6009 : BUFG
      port map (I=>XLXN_16009,
                O=>CLK_MUX);
   
   XLXI_6016 : FDRE
      port map (C=>MASTER_CLK,
                CE=>DCM_RESET_MAP,
                D=>rx_data(12),
                R=>reset,
                Q=>dcm_mux_sel);
   
   XLXI_6025 : FDRE
      port map (C=>MASTER_CLK,
                CE=>FADC_MAP,
                D=>rx_data(0),
                R=>reset,
                Q=>FADC_RST);
   
   XLXI_6033 : FDRE
      port map (C=>MASTER_CLK,
                CE=>FADC_MAP,
                D=>rx_data(4),
                R=>reset,
                Q=>FADC_CAL);
   
   XLXI_6040 : BUFG
      port map (I=>XLXN_15075,
                O=>XLXN_15130);
   
   XLXI_6041 : OBUF
      port map (I=>XLXN_15077,
                O=>BUSDD_05DP_10S);
   
   XLXI_6051 : FD16RE_MXILINX_TOP_LEVEL
      port map (C=>MASTER_CLK,
                CE=>FADC_CTRL_MAP,
                D(15 downto 0)=>rx_data(15 downto 0),
                R=>reset,
                Q(15 downto 0)=>fadc_ctrl_data(15 downto 0));
   
   XLXI_6056 : M2_1_MXILINX_TOP_LEVEL
      port map (D0=>trigger,
                D1=>fadc_ctrl_data(10),
                S0=>fadc_ctrl_data(14),
                O=>fadc_trigger);
   
   XLXI_6057 : M2_1_MXILINX_TOP_LEVEL
      port map (D0=>fadc_wctrl_done,
                D1=>fadc_ctrl_data(11),
                S0=>fadc_ctrl_data(15),
                O=>fadc_done);
   
   XLXI_6074 : IBUFDS
   -- synopsys translate_off
   generic map( DIFF_TERM => TRUE)
   -- synopsys translate_on
      port map (I=>BUSB_00DP_00S,
                IB=>BUSB_00DN_01S,
                O=>fadc_data_in(7));
   
   XLXI_6116 : OBUF
      port map (I=>XLXN_15077,
                O=>BUSDD_04DP_08S);
   
   XLXI_6120 : OBUF
      port map (I=>XLXN_15077,
                O=>BUSDD_03DP_06S);
   
   XLXI_6121 : OBUF
      port map (I=>XLXN_15077,
                O=>BUSDD_02DP_04S);
   
   XLXI_6122 : OBUF
      port map (I=>XLXN_15077,
                O=>BUSDD_01DP_02S);
   
   XLXI_6123 : OBUF
      port map (I=>XLXN_15077,
                O=>BUSDD_00DP_00S);
   
   XLXI_6124 : buffer_10bit
      port map (i(9 downto 0)=>fadc_waddr_rise(9 downto 0),
                o(9 downto 0)=>fadc_debug(9 downto 0));
   
   XLXI_6126 : buffer_10bit
      port map (i(9 downto 0)=>fadc_raddr(9 downto 0),
                o(9 downto 0)=>fadc_debug(21 downto 12));
   
   XLXI_6135 : BUF
      port map (I=>fadc_rdy_for_trigger,
                O=>fadc_debug(60));
   
   XLXI_6136 : buffer_10bit
      port map (i(9 downto 0)=>fadc_ctrl_data(9 downto 0),
                o(9 downto 0)=>fadc_debug(33 downto 24));
   
   XLXI_6137 : BUF
      port map (I=>fadc_done,
                O=>fadc_debug(56));
   
   XLXI_6138 : BUF
      port map (I=>fadc_trigger,
                O=>fadc_debug(52));
   
   XLXI_6140 : IBUFDS
   -- synopsys translate_off
   generic map( DIFF_TERM => TRUE)
   -- synopsys translate_on
      port map (I=>BUSA_30DP_60S,
                IB=>BUSA_30DN_61S,
                O=>scin_0);
   
   XLXI_6144 : OBUF
      port map (I=>scin_0,
                O=>INTERNAL_08DP_16S);
   
   XLXI_6146 : OBUF
      port map (I=>trigger,
                O=>INTERNAL_08DN_17S);
   
   XLXI_6150 : IBUFDS
   -- synopsys translate_off
   generic map( DIFF_TERM => TRUE)
   -- synopsys translate_on
      port map (I=>BUSB_01DP_02S,
                IB=>BUSB_01DN_03S,
                O=>fadc_data_in(6));
   
   XLXI_6151 : IBUFDS
   -- synopsys translate_off
   generic map( DIFF_TERM => TRUE)
   -- synopsys translate_on
      port map (I=>BUSB_02DP_04S,
                IB=>BUSB_02DN_05S,
                O=>fadc_data_in(5));
   
   XLXI_6152 : IBUFDS
   -- synopsys translate_off
   generic map( DIFF_TERM => TRUE)
   -- synopsys translate_on
      port map (I=>BUSB_03DP_06S,
                IB=>BUSB_03DN_07S,
                O=>fadc_data_in(4));
   
   XLXI_6153 : IBUFDS
   -- synopsys translate_off
   generic map( DIFF_TERM => TRUE)
   -- synopsys translate_on
      port map (I=>BUSB_04DP_08S,
                IB=>BUSB_04DN_09S,
                O=>fadc_data_in(3));
   
   XLXI_6154 : IBUFDS
   -- synopsys translate_off
   generic map( DIFF_TERM => TRUE)
   -- synopsys translate_on
      port map (I=>BUSB_05DP_10S,
                IB=>BUSB_05DN_11S,
                O=>fadc_data_in(2));
   
   XLXI_6155 : IBUFDS
   -- synopsys translate_off
   generic map( DIFF_TERM => TRUE)
   -- synopsys translate_on
      port map (I=>BUSB_06DP_12S,
                IB=>BUSB_06DN_13S,
                O=>fadc_data_in(1));
   
   XLXI_6156 : IBUFDS
   -- synopsys translate_off
   generic map( DIFF_TERM => TRUE)
   -- synopsys translate_on
      port map (I=>BUSB_07DP_14S,
                IB=>BUSB_07DN_15S,
                O=>fadc_data_in(0));
   
   XLXI_6165 : IBUFDS
   -- synopsys translate_off
   generic map( DIFF_TERM => TRUE)
   -- synopsys translate_on
      port map (I=>BUSB_08DP_16S,
                IB=>BUSB_08DN_17S,
                O=>fadc_data_in(15));
   
   XLXI_6166 : IBUFDS
   -- synopsys translate_off
   generic map( DIFF_TERM => TRUE)
   -- synopsys translate_on
      port map (I=>BUSB_09DP_18S,
                IB=>BUSB_09DN_19S,
                O=>fadc_data_in(14));
   
   XLXI_6167 : IBUFDS
   -- synopsys translate_off
   generic map( DIFF_TERM => TRUE)
   -- synopsys translate_on
      port map (I=>BUSB_10DP_20S,
                IB=>BUSB_10DN_21S,
                O=>fadc_data_in(13));
   
   XLXI_6168 : IBUFDS
   -- synopsys translate_off
   generic map( DIFF_TERM => TRUE)
   -- synopsys translate_on
      port map (I=>BUSB_11DP_22S,
                IB=>BUSB_11DN_23S,
                O=>fadc_data_in(12));
   
   XLXI_6169 : IBUFDS
   -- synopsys translate_off
   generic map( DIFF_TERM => TRUE)
   -- synopsys translate_on
      port map (I=>BUSB_12DP_24S,
                IB=>BUSB_12DN_25S,
                O=>fadc_data_in(11));
   
   XLXI_6170 : IBUFDS
   -- synopsys translate_off
   generic map( DIFF_TERM => TRUE)
   -- synopsys translate_on
      port map (I=>BUSB_13DP_26S,
                IB=>BUSB_13DN_27S,
                O=>fadc_data_in(10));
   
   XLXI_6171 : IBUFDS
   -- synopsys translate_off
   generic map( DIFF_TERM => TRUE)
   -- synopsys translate_on
      port map (I=>BUSB_14DP_28S,
                IB=>BUSB_14DN_29S,
                O=>fadc_data_in(9));
   
   XLXI_6172 : IBUFDS
   -- synopsys translate_off
   generic map( DIFF_TERM => TRUE)
   -- synopsys translate_on
      port map (I=>BUSB_15DP_30S,
                IB=>BUSB_15DN_31S,
                O=>fadc_data_in(8));
   
   XLXI_6181 : IBUFDS
   -- synopsys translate_off
   generic map( DIFF_TERM => TRUE)
   -- synopsys translate_on
      port map (I=>BUSA_29DP_58S,
                IB=>BUSA_29DN_59S,
                O=>scin_1);
   
   XLXI_6182 : IBUFDS
   -- synopsys translate_off
   generic map( DIFF_TERM => TRUE)
   -- synopsys translate_on
      port map (I=>BUSA_28DP_56S,
                IB=>BUSA_28DN_57S,
                O=>scin_2);
   
   XLXI_6183 : IBUFDS
   -- synopsys translate_off
   generic map( DIFF_TERM => TRUE)
   -- synopsys translate_on
      port map (I=>BUSA_26DP_52S,
                IB=>BUSA_26DN_53S,
                O=>scin_3);
   
   XLXI_6185 : trigger_recv_blk
      port map (clk=>MASTER_CLK,
                rst=>trig_reset,
                scin0=>scin_0,
                scin1=>scin_1,
                scin2=>scin_2,
                scin3=>scin_3,
                selCh0=>trig_scin0_sel,
                cnt(31 downto 0)=>trig_debug(31 downto 0),
                trig=>trigger);
   
   XLXI_6186 : FDRE
      port map (C=>MASTER_CLK,
                CE=>TRIG_MAP,
                D=>rx_data(0),
                R=>reset,
                Q=>trig_scin0_sel);
   
   XLXI_6188 : FDRE
      port map (C=>MASTER_CLK,
                CE=>TRIG_MAP,
                D=>rx_data(4),
                R=>reset,
                Q=>trig_reset);
   
   XLXI_6189 : GND
      port map (G=>XLXN_15077);
   
   XLXI_6199 : DCM_BASE
   -- synopsys translate_off
   generic map( DLL_FREQUENCY_MODE => "HIGH",
            DFS_FREQUENCY_MODE => "HIGH",
            CLKIN_PERIOD => 5.33333333)
   -- synopsys translate_on
      port map (CLKFB=>FADC_DCLK,
                CLKIN=>XLXN_15130,
                RST=>fadc_clk_in_reset,
                CLKDV=>open,
                CLKFX=>open,
                CLKFX180=>open,
                CLK0=>XLXN_15087,
                CLK2X=>open,
                CLK2X180=>open,
                CLK90=>open,
                CLK180=>XLXN_15092,
                CLK270=>open,
                LOCKED=>debug_signals(3));
   
   XLXI_6200 : BUFG
      port map (I=>XLXN_15087,
                O=>FADC_DCLK);
   
   XLXI_6202 : BUFG
      port map (I=>XLXN_15092,
                O=>FADC_DCLK_INV);
   
   XLXI_6226 : FDRE
      port map (C=>MASTER_CLK,
                CE=>FADC_DELAY_MAP,
                D=>rx_data(8),
                R=>reset,
                Q=>fadc_clk_in_reset);
   
   XLXI_6227 : ethernet_interface
      port map (b_data(63 downto 0)=>b_data(63 downto 0),
                b_data_we=>b_data_we,
                b_force_packet=>b_force_packet,
                MASTER_CLK=>MASTER_CLK,
                PHY_RXD(7 downto 0)=>GMII_RXD_0_sig(7 downto 0),
                PHY_RX_DV=>GMII_RX_DV_0_sig,
                PHY_RX_ER=>GMII_RX_ER_0_sig,
                reset_in=>XLXN_15140,
                slow_clk=>clock_5mhz,
                tx_data(63 downto 0)=>tx_data(63 downto 0),
                user_addr(7 downto 0)=>ip_addr(7 downto 0),
                b_enable=>b_enable,
                PHY_TXD(7 downto 0)=>PHY_TXD_sig(7 downto 0),
                PHY_TX_EN=>PHY_TXEN_sig,
                PHY_TX_ER=>PHY_TXER_sig,
                reset_out=>reset,
                rx_addr(31 downto 0)=>rx_addr(31 downto 0),
                rx_data(63 downto 0)=>rx_data(63 downto 0),
                rx_wren=>rx_wren,
                TX_CLK=>GTX_CLK_0_sig);
   
   XLXI_6228 : GND
      port map (G=>XLXN_15140);
   
   XLXI_6229 : OBUF
      port map (I=>XLXN_15150,
                O=>BUSC_21DN_43S);
   
   XLXI_6230 : INV
      port map (I=>reset,
                O=>XLXN_15150);
   
   XLXI_6247 : FD8RE_MXILINX_TOP_LEVEL
      port map (C=>MASTER_CLK,
                CE=>TRIG_ATTRIBUTES_MAP,
                D(7 downto 0)=>rx_data(7 downto 0),
                R=>reset,
                Q(7 downto 0)=>threshold(7 downto 0));
   
   XLXI_6251 : FD16RE_MXILINX_TOP_LEVEL
      port map (C=>MASTER_CLK,
                CE=>TRIG_ATTRIBUTES_MAP,
                D(15 downto 0)=>rx_data(23 downto 8),
                R=>reset,
                Q(15 downto 0)=>user_sample_size(15 downto 0));
   
   XLXI_6253 : data_send
      port map (clk=>MASTER_CLK,
                clock_enable=>ram_en,
                data_in(63 downto 0)=>data_send_in(63 downto 0),
                debug_signals(7 downto 0)=>debug_signals(7 downto 0),
                header(59 downto 0)=>XLXI_6253_header_openSignal(59 downto 0),
                new_trigger=>new_trigger,
                ram_addr(9 downto 0)=>ram_addr(9 downto 0),
                rst=>reset,
                signal_ID(3 downto 0)=>XLXI_6253_signal_ID_openSignal(3 downto 
            0),
                trigger_addr(9 downto 0)=>trigger_addr(9 downto 0),
                user_positive_delay(15 downto 0)=>user_positive_delay(15 downto 
            0),
                user_pretrig_sample_size(15 downto 
            0)=>user_pretrig_sample_size(15 downto 0),
                user_sample_size(15 downto 0)=>user_sample_size(15 downto 0),
                b_data(63 downto 0)=>event_data(63 downto 0),
                b_data_we=>event_data_we,
                b_force_packet=>event_data_end);
   
   XLXI_6331 : ClockLatchSignals
      port map (clk=>clock_5mhz,
                rst=>XLXN_15518,
                signals(7 downto 0)=>clk_latch_signals(7 downto 0));
   
   XLXI_6338 : GND
      port map (G=>XLXN_15518);
   
   XLXI_6341 : ADC_FIFO
      port map (din(15 downto 0)=>fadc_latched_in(15 downto 0),
                rd_clk=>MASTER_CLK,
                rd_en=>XLXN_15529,
                wr_clk=>FADC_DCLK,
                wr_en=>XLXN_15533,
                dout(63 downto 0)=>fadc_fifo_data_out(63 downto 0),
                empty=>adc_fifo_empty,
                full=>XLXN_15524,
                overflow=>adc_fifo_overflow,
                valid=>clock_enable);
   
   XLXI_6342 : VCC
      port map (P=>XLXN_15533);
   
   XLXI_6346 : VCC
      port map (P=>XLXN_15529);
   
   XLXI_6349 : PeakFinder
      port map (clk=>MASTER_CLK,
                clock_enable=>clock_enable,
                data_in(63 downto 0)=>fadc_fifo_data_out(63 downto 0),
                ext_trig=>ext_trig,
                manual_force_trig=>manual_force_trig,
                median_filter=>apply_median_filter,
                reset=>reset,
                signal_threshold(7 downto 0)=>threshold(7 downto 0),
                trig_types(7 downto 0)=>trig_types(7 downto 0),
                addr_out(9 downto 0)=>ram_addr(9 downto 0),
                clear_manual_trig=>clear_manual_trig,
                data_out(63 downto 0)=>peak_finder_data_out(63 downto 0),
                new_trigger=>new_trigger,
                out_enable=>ram_en,
                trigger_address(9 downto 0)=>trigger_addr(9 downto 0));
   
   XLXI_6380 : EthernetRAM
      port map (addra(9 downto 0)=>ram_addr(9 downto 0),
                clka=>MASTER_CLK,
                dina(63 downto 0)=>peak_finder_data_out(63 downto 0),
                wea(0)=>ram_en,
                douta(63 downto 0)=>data_send_in(63 downto 0));
   
   XLXI_6394 : FD16RE_MXILINX_TOP_LEVEL
      port map (C=>MASTER_CLK,
                CE=>TRIG_ATTRIBUTES_MAP,
                D(15 downto 0)=>rx_data(39 downto 24),
                R=>reset,
                Q(15 downto 0)=>user_pretrig_sample_size(15 downto 0));
   
   XLXI_6396 : FDCE
      port map (C=>MASTER_CLK,
                CE=>MANUAL_TRIG_MAP,
                CLR=>clear_manual_trig,
                D=>rx_data(0),
                Q=>manual_force_trig);
   
   XLXI_6404 : OBUF
      port map (I=>trigger_out,
                O=>U10_3);
   
   XLXI_6408 : IBUF
      port map (I=>U10_2,
                O=>open);
   
   XLXI_6409 : IBUF
      port map (I=>U10_1,
                O=>ext_trig);
   
   XLXI_6410 : FD16RE_MXILINX_TOP_LEVEL
      port map (C=>MASTER_CLK,
                CE=>TRIG_ATTRIBUTES_MAP,
                D(15 downto 0)=>rx_data(55 downto 40),
                R=>reset,
                Q(15 downto 0)=>user_positive_delay(15 downto 0));
   
   XLXI_6414 : FD8RE_MXILINX_TOP_LEVEL
      port map (C=>MASTER_CLK,
                CE=>TRIG_ATTRIBUTES_MAP,
                D(7 downto 0)=>rx_data(63 downto 56),
                R=>reset,
                Q(7 downto 0)=>trig_types(7 downto 0));
   
   XLXI_6415 : event_analysis
      port map (clear_veto=>veto_clear,
                clk=>MASTER_CLK,
                clock_enable=>ram_en_latch,
                data_in(63 downto 0)=>event_data(63 downto 0),
                data_in_end=>event_data_end,
                data_in_we=>event_data_we,
                footer_in(63 downto 0)=>XLXN_15874(63 downto 0),
                force_veto=>veto_force,
                reset=>reset,
                veto_en=>veto_enabled,
                zero_cross_thresh_high(7 downto 0)=>zero_cross_thresh_high(7 
            downto 0),
                zero_cross_thresh_low(7 downto 0)=>zero_cross_thresh_low(7 
            downto 0),
                zero_cross_veto_thresh(7 downto 0)=>zero_cross_veto_thresh(7 
            downto 0),
                data_out(63 downto 0)=>b_data(63 downto 0),
                data_out_end=>b_force_packet,
                data_out_we=>b_data_we,
                reset_clear_veto=>reset_clear_veto,
                reset_force_veto=>reset_force_veto,
                veto=>veto,
                zero_cross_count(7 downto 0)=>zero_cross_count(7 downto 0));
   
   XLXI_6418 : FD8RE_MXILINX_TOP_LEVEL
      port map (C=>MASTER_CLK,
                CE=>EVENT_MAP,
                D(7 downto 0)=>rx_data(7 downto 0),
                R=>reset,
                Q(7 downto 0)=>zero_cross_thresh_low(7 downto 0));
   
   XLXI_6419 : FD8RE_MXILINX_TOP_LEVEL
      port map (C=>MASTER_CLK,
                CE=>EVENT_MAP,
                D(7 downto 0)=>rx_data(15 downto 8),
                R=>reset,
                Q(7 downto 0)=>zero_cross_thresh_high(7 downto 0));
   
   XLXI_6420 : FD8RE_MXILINX_TOP_LEVEL
      port map (C=>MASTER_CLK,
                CE=>EVENT_MAP,
                D(7 downto 0)=>rx_data(23 downto 16),
                R=>reset,
                Q(7 downto 0)=>zero_cross_veto_thresh(7 downto 0));
   
   XLXI_6421 : FDCE
      port map (C=>MASTER_CLK,
                CE=>EVENT_MAP,
                CLR=>reset_clear_veto,
                D=>rx_data(26),
                Q=>veto_clear);
   
   XLXI_6422 : FDCE
      port map (C=>MASTER_CLK,
                CE=>EVENT_MAP,
                CLR=>reset_force_veto,
                D=>rx_data(25),
                Q=>veto_force);
   
   XLXI_6423 : FDRE
      port map (C=>MASTER_CLK,
                CE=>EVENT_MAP,
                D=>rx_data(24),
                R=>reset,
                Q=>veto_enabled);
   
   XLXI_6433 : INV
      port map (I=>veto,
                O=>XLXN_15958);
   
   XLXI_6434 : AND2
      port map (I0=>XLXN_15958,
                I1=>ext_trig,
                O=>trigger_out);
   
   XLXI_6435 : OBUF8_MXILINX_TOP_LEVEL
      port map (I(7 downto 0)=>zero_cross_count(7 downto 0),
                O=>open);
   
   XLXI_6436 : OBUF
      port map (I=>adc_fifo_empty,
                O=>open);
   
   XLXI_6437 : OBUF
      port map (I=>clock_enable,
                O=>open);
   
   XLXI_6439 : IBUF
      port map (I=>IP_MAC_0,
                O=>ext_ip_addr(0));
   
   XLXI_6440 : IBUF
      port map (I=>IP_MAC_1,
                O=>ext_ip_addr(1));
   
   XLXI_6441 : IBUF
      port map (I=>IP_MAC_2,
                O=>ext_ip_addr(2));
   
   XLXI_6442 : IBUF
      port map (I=>IP_MAC_3,
                O=>ext_ip_addr(3));
   
   XLXI_6443 : IBUF
      port map (I=>IP_MAC_4,
                O=>ext_ip_addr(4));
   
   XLXI_6445 : IBUF
      port map (I=>IP_MAC_5,
                O=>ext_ip_addr(5));
   
   XLXI_6446 : IBUF
      port map (I=>IP_MAC_6,
                O=>ext_ip_addr(6));
   
   XLXI_6447 : IBUF
      port map (I=>IP_MAC_7,
                O=>ext_ip_addr(7));
   
   XLXI_6448 : ext_ip_addr_map
      port map (ext_ip_addr(7 downto 0)=>ext_ip_addr(7 downto 0),
                ip_addr_out(7 downto 0)=>ip_addr(7 downto 0));
   
   XLXI_6459 : GND
      port map (G=>XLXN_16003);
   
   XLXI_6460 : GND
      port map (G=>XLXN_16004);
   
   XLXI_6461 : VCC
      port map (P=>XLXN_16002);
   
   XLXI_6462 : FD
      port map (C=>MASTER_CLK,
                D=>ram_en,
                Q=>ram_en_latch);
   
   XLXI_6463 : INV
      port map (I=>FADC_CLK_P,
                O=>FADC_CLK_N);
   
   XLXI_6465 : FD16RE_MXILINX_TOP_LEVEL
      port map (C=>MASTER_CLK,
                CE=>FADC_DATA_EDGE_MAP,
                D(15 downto 0)=>rx_data(15 downto 0),
                R=>reset,
                Q(15 downto 0)=>fadc_data_edge_sel(15 downto 0));
   
   XLXI_6467 : FDRE
      port map (C=>MASTER_CLK,
                CE=>MEDIAN_FILTER_MAP,
                D=>rx_data(0),
                R=>reset,
                Q=>apply_median_filter);
   
end BEHAVIORAL;


