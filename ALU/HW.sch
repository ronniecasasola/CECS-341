<?xml version="1.0" encoding="UTF-8"?>
<drawing version="7">
    <attr value="artix7" name="DeviceFamilyName">
        <trait delete="all:0" />
        <trait editname="all:0" />
        <trait edittrait="all:0" />
    </attr>
    <netlist>
        <signal name="Sel1" />
        <signal name="Sel0" />
        <signal name="FuncCode" />
        <signal name="Data1" />
        <signal name="Data2" />
        <signal name="Data3" />
        <signal name="MEMData" />
        <signal name="ALUOp" />
        <signal name="D_Out" />
        <signal name="Zero" />
        <port polarity="Input" name="Sel1" />
        <port polarity="Input" name="Sel0" />
        <port polarity="Input" name="FuncCode" />
        <port polarity="Input" name="Data1" />
        <port polarity="Input" name="Data2" />
        <port polarity="Input" name="Data3" />
        <port polarity="Input" name="MEMData" />
        <port polarity="Input" name="ALUOp" />
        <port polarity="Output" name="D_Out" />
        <port polarity="Output" name="Zero" />
        <blockdef name="HW">
            <timestamp>2017-2-21T8:47:28</timestamp>
            <rect width="256" x="64" y="-512" height="512" />
            <line x2="0" y1="-480" y2="-480" x1="64" />
            <line x2="0" y1="-416" y2="-416" x1="64" />
            <line x2="0" y1="-352" y2="-352" x1="64" />
            <line x2="0" y1="-288" y2="-288" x1="64" />
            <line x2="0" y1="-224" y2="-224" x1="64" />
            <line x2="0" y1="-160" y2="-160" x1="64" />
            <line x2="0" y1="-96" y2="-96" x1="64" />
            <line x2="0" y1="-32" y2="-32" x1="64" />
            <line x2="384" y1="-480" y2="-480" x1="320" />
            <line x2="384" y1="-32" y2="-32" x1="320" />
        </blockdef>
        <block symbolname="HW" name="XLXI_1">
            <blockpin signalname="Sel1" name="Sel1" />
            <blockpin signalname="Sel0" name="Sel0" />
            <blockpin signalname="FuncCode" name="FuncCode" />
            <blockpin signalname="Data1" name="Data1" />
            <blockpin signalname="Data2" name="Data2" />
            <blockpin signalname="Data3" name="Data3" />
            <blockpin signalname="MEMData" name="MEMData" />
            <blockpin signalname="ALUOp" name="ALUOp" />
            <blockpin signalname="Zero" name="Zero" />
            <blockpin signalname="D_Out" name="D_Out" />
        </block>
    </netlist>
    <sheet sheetnum="1" width="3520" height="2720">
        <instance x="1344" y="1168" name="XLXI_1" orien="R0">
        </instance>
        <branch name="Sel1">
            <wire x2="1344" y1="688" y2="688" x1="1312" />
        </branch>
        <iomarker fontsize="28" x="1312" y="688" name="Sel1" orien="R180" />
        <branch name="Sel0">
            <wire x2="1344" y1="752" y2="752" x1="1312" />
        </branch>
        <iomarker fontsize="28" x="1312" y="752" name="Sel0" orien="R180" />
        <branch name="FuncCode">
            <wire x2="1344" y1="816" y2="816" x1="1312" />
        </branch>
        <iomarker fontsize="28" x="1312" y="816" name="FuncCode" orien="R180" />
        <branch name="Data1">
            <wire x2="1344" y1="880" y2="880" x1="1312" />
        </branch>
        <iomarker fontsize="28" x="1312" y="880" name="Data1" orien="R180" />
        <branch name="Data2">
            <wire x2="1344" y1="944" y2="944" x1="1312" />
        </branch>
        <iomarker fontsize="28" x="1312" y="944" name="Data2" orien="R180" />
        <branch name="Data3">
            <wire x2="1344" y1="1008" y2="1008" x1="1312" />
        </branch>
        <iomarker fontsize="28" x="1312" y="1008" name="Data3" orien="R180" />
        <branch name="MEMData">
            <wire x2="1344" y1="1072" y2="1072" x1="1312" />
        </branch>
        <iomarker fontsize="28" x="1312" y="1072" name="MEMData" orien="R180" />
        <branch name="ALUOp">
            <wire x2="1344" y1="1136" y2="1136" x1="1312" />
        </branch>
        <iomarker fontsize="28" x="1312" y="1136" name="ALUOp" orien="R180" />
        <branch name="D_Out">
            <wire x2="1760" y1="1136" y2="1136" x1="1728" />
        </branch>
        <iomarker fontsize="28" x="1760" y="1136" name="D_Out" orien="R0" />
        <branch name="Zero">
            <wire x2="1760" y1="688" y2="688" x1="1728" />
        </branch>
        <iomarker fontsize="28" x="1760" y="688" name="Zero" orien="R0" />
    </sheet>
</drawing>