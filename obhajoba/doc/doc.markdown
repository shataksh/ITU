% GUI strategické hry
% Jan Pacner (xpacne00@stud.fit.vutbr.cz)\
  Radek Bařinka (xbarin04@stud.fit.vutbr.cz)\
  Lukáš Frencl (xfrenc00@stud.fit.vutbr.cz)
% 2012-10-13 12:54:17 CEST

Úvod
====

Předmětem této práce bylo implementovat inovativní grafické rozhraní stratigické hry pomocí jakékoliv dostupné technologie. K\ tomuto účelu byly zvoleny technologie jako QML (součást Qt frameworku), HTML, CSS a JS.

Návrh
=====

Našim cílem bylo využít moderních technologií tak, aby výsledek byl co nejvíce multiplatformní a uživatelsky co nejpřívětivější. Pro účely přesného porovnání rozdílu mezi uživatelskou přívětivostí v\ moderním GUI a staršími způsoby návrhu, byly implementovány dvě varianty aplikace. Obě aplikace jsou úmyslně co nejvíce podobné, avšak liší se v\ podstatném detailu, kterým jsou animace.

Moderní přístup je demonstrován na využití co největšího počtu různých oku lahodících animací.

Zastaralý přístup (nazvěme ho „obyčejný“) však žádnou animaci neobsahuje. Níže jsou uvedeny výsledky měření a vybrané citace uživatelů, na kterých byla aplikace otestována.

Aby byla aplikace použitelná pro co nejširší publikum, byl kladen důraz na tvorbu co nejjednoduššího rozhraní, avšak poskytujícího veškeré potřebné součásti. Protože byla vybrána real-time strategie, tyto součásti zahrnují:

*   okamžitý vstup do hry ihned po spuštění (avšak hra je ve stavu „pauza“)
*   ukončení hry
*   uložení hry
*   nastavení uživatelského jména
*   otevření a prohlížení nápovědy
*   vstup do internetového obchodu s\ přídavky ke hře a jinými s\ hrou souvisejícími položkami

Všechny tyto položky byly zdárně implementovány.

Jako zajímavost lze uvést, že pro menu bylo využito tzv. „pie menu“. Jak již název napovídá, jedná se o\ menu s\ položkami seřazenými do kruhu, či jiného podobného obrazce (proto také koláč). Tento způsob zpracování menu je již dlouho znám, avšak uplatnění nachází bohužel především v\ herním průmyslu.

Implementace
============

Technologie QML umožňuje téměř libovolnou tvorbu grafických rozhraní pro velké množství platforem, a\ proto byla právě tato technologie zvolena. Pro interní potřeby (např. nápověda, internetový obchod) v\ aplikaci bylo využito technologie HTML a CSS. QML je rozšíření frameworku Qt, což umožňuje využití veškerých součástí Qt a ne pouze QML komponent.

Ačkoliv je QML velice úsporné na množství kódu, je aplikace poměrně rozsáhlá.

Průběh prací
============

Postup prací na aplikaci se původně řídil plánem, avšak po jisté době se ukázalo, že někteří z\ nás jsou produktivnější v\ případě tvorby webového obsahu (tzn. nápovědy a internetového obchodu), někteří umí pracovat dobře s\ rastrovou grafikou a jiní zase velice dobře tvoří GUI v\ QML.

Rozdělení v\ plánu bylo tedy zavrženo a přešlo se na vývoj rozdělený podle schopností.

Jak se aplikace vyvíjela v\ čase zachycuje několik následujících obrázků.

![Obr. 1](../test01.jpg)

![Obr. 2](../test02.jpg)

![Obr. 3](../test03.jpg)

Nadcházející obrázky zobrazují výslednou aplikaci.

![Obr. 4](../final00.jpg)

![Obr. 5](../final07.jpg)

![Obr. 5](../final06.jpg)

![Obr. 5](../final05.jpg)

Testování
=========

K\ testování bylo přizváno celkem 16 testerů. Přesně polovině z\ nich (náhodně vybrané) byla nejprve ukázána aplikace s\ animacemi a až poté aplikace bez animací. Druhé polovině přesne naopak.

Výsledky jsou však vyneseny do grafu společně, protože již náhodným výběrem by mělo být zajištěno, že se neobjeví odchylka.

Měřeny byly časy od spuštění po prví kliknutí na tlačítko vpravo dole.

Každému testerovi bylo před zahájením testování sděleno, že mu první 3 až 4 minuty nebudu odpovídat a že hra je pouze simulovaná pomocí slideshow.

Nakonec byly testeři dotázáni na otázky uvedené v\ prezentaci (tyto neslouží ke statistickému sběru informací, nýbrž pouze pro zjištění celkového působení aplikací).

Následují dva grafy zobrazující výsledky měření.

![Aplikace s\ animacemi](with_anim.png)

![Aplikace bez animací](without_anim.png)

Závěr
=====

Podařilo se vytvořit obě aplikace a potvrdit myšlenku, že uživatelé mají animace rádi. Nakonec je nutné podotknout, že technologie QML je velice dobře navržená a pro takovouto činnost témeř ideální.

Použitá literatura a reference
==============================

*   Nokia Corporation. *Introduction to QML language* [online]. 2011------, [cit. 2012-12-08]. Dostupné na: <http://doc.qt.digia.com/qt/qdeclarativeintroduction.html>.

*   Bavagnoli, Marco. *StarMenu: custom QML component plugin* [online]. 2012-03---, [cit. 2012-12-08]. Dostupné na: <http://marcobavagnoli.wordpress.com/starmenu-custom-qml-component-plugin/>.






<!--
do prezentace na posledni slajd: 2MB???
              neni nic videt, protoze cilem bylo nezabirat uzivateli hraci plochu

hru simuluje me slideshow

pie menu
qml
    pod 1000 radku!
NEzavislost na rozliseni (+ pridat do prezentace + ukazat v realu)
testovani (s X bez animaci) + grafy
    pravidlo: prvni dojem se pocita, posledni zustava => okamzite fullscreen s barvickami
    jake otazky (uvod pro testera; mereni; 3 otazky)
    kolik lidi
    1 specialni vtipnou odpoved (ihned po spusteni: "A co mam tedka delat?")
-->
