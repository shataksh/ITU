% GUI strategické hry
% Jan Pacner (xpacne00@stud.fit.vutbr.cz)\
  Radek Bařinka (xbarin04@stud.fit.vutbr.cz)\
  Lukáš Frencl (xfrenc00@stud.fit.vutbr.cz)
% 2012-10-13 12:54:17 CEST

Úvod
====

Předmětem této práce bylo implementovat inovativní grafické rozhraní stratigické hry pomocí jakékoliv dostupné technologie. K\ tomuto účelu byly zvoleny technologie jako QML (součást Qt frameworku), HTML, CSS a JS. Výstupem je moderní uživatelské rozhraní pro strategickou hru. Aplikace je multiplatformní a nezávislá na rozlišení.

Návrh
=====

Našim cílem bylo využít moderních technologií tak, aby výsledek podporoval co nejvíce platforem a byl uživatelsky co nejpřívětivější. Pro účely přesného porovnání rozdílu mezi uživatelskou přívětivostí v\ moderním GUI a staršími způsoby návrhu, byly implementovány dvě varianty aplikace. Obě aplikace jsou úmyslně velice podobné, liší se ve využití animací, kde jedna varianta neobsahuje žádné animace a druhá má animovanou většinu proveditelných akcí. Tyto animace demonstrují podstatný prvek moderní přístupu.

Zastaralý přístup (nazvěme ho „obyčejný“) tedy žádnou animaci neobsahuje. Níže jsou uvedeny výsledky měření a vybrané citace uživatelů, kterými byla aplikace otestována.

Aby byla aplikace použitelná pro co nejširší publikum, byl kladen důraz na tvorbu co nejjednoduššího rozhraní, avšak poskytujícího veškeré potřebné součásti. Nosnou myšlenkou byla nezávislost na rozlišení a tedy bezproblémové použití na většině dnes běžně dostupných zařízeních (tablet, smartphone, PC atd.). Protože byla vybrána real-time strategie, tyto součásti zahrnují:

*   okamžitý vstup do hry ihned po spuštění (hra je však ve stavu „pauza“)
*   režim plné obrazovky (fullscreen) jako výchozí (vychází z\ pravidla, že první dojem se počítá a ten poslední zůstává)
*   důraz na co největší zaplnění zobrazovací plochy samotnou hrou a neobtěžování uživatele ovládacími prvku, pokud to není nezbytné
*   ukončení hry
*   uložení hry
*   nastavení uživatelského jména
*   otevření a prohlížení nápovědy
*   vstup do internetového obchodu s\ přídavky ke hře a jinými s\ hrou souvisejícími položkami
*   simulace samotné hry (engine + obsah) byla provedena za využití slideshow s\ náhodným výběrem vhodných obrázků
*   atraktivní barevnost (tedy živé barvy, aby uživatel byl permanentně pod skrytým tlakem tvořící dojem, že se neustále něco ve hře děje)
*   tématika zaměřená na jistý styl (v\ tomto případě `Steampunk` a piráti)

Všechny tyto položky byly implementovány.

Jedním z\ klíčových prvků byla menu, které jsou uživateli nejčastěji používaným prvkem v\ uživatelském rozhraní hry. K\ tomuto účelu bylo zvoleno tzv. „pie menu“. Jak již název napovídá, jedná se o\ menu s\ položkami seřazenými do kruhu, či jiného vhodného rozložení (proto také koláč). Po otevření menu např. kliknutím na nějaký prvek se objeví několik položek (např. tlačítek) okolo definovaného bodu (vhodné je mít tento bod ve středu prvku, na který se klikalo). V\ takovém případě je tedy vzdálenost od aktuální pozice kurzoru stejná ke všem položkám a všechny položky jsou vidět (nejsou za ničím skryty). Řešení vnořených menu se různí podle potřeb dané aplikace.

Tento způsob zpracování menu je vysoce efektivní zejména na místech, kde nejsou potřebné dlouhé textové popisy přímo přítomné v\ položce menu. Jelikož je však uživatelsky příjemnější používání ikon, lze `pie menu` dnes použít téměř kdekoliv. Nejinak tomu je i v\ případě navrženého gui strategické hry. Tento princip je již dlouho znám (první zaznamenané zmínka[^piemenufirstnote] sahá až do roku 1969), avšak uplatnění dnes nachází především v\ herním průmyslu.

[^piemenufirstnote]: Wiseman, N. E.; Lemke, H. U.; Hiles, J. O.. "PIXIE: A New Approach to Graphical Man-Machine Communications". Proceedings of 1969 CAD Conference Southhampton, IEEE Conference Publication 51. pp. 463.

Dalším výrazným

Implementace
============

Použitá technologie QML umožňuje téměř libovolnou tvorbu grafických rozhraní pro velké množství platforem, a\ proto byla právě tato technologie zvolena. Pro interní potřeby (např. nápověda, internetový obchod) v\ aplikaci byly využity technologie HTML a CSS. QML je rozšíření frameworku Qt, což umožňuje využití veškerých součástí Qt a ne pouze QML komponent. Ačkoliv je QML velice úsporné na množství kódu, je aplikace poměrně rozsáhlá.

Samotná hra (respektive engine) je simulovaný prolínajícími se obrázky. Tato slideshow je pozastavena v\ případech, které vyžadují dlouhodobější práci mimo hru (tedy např. pročítání nápovědy).

Celá aplikace je nezávislá na rozlišení, což je docíleno relativním pozicováním všech prvků a dynamickým přizpůsobováním jejich velikosti aktuálnímu rozměru zobrazovací plochy. Aplikaci tedy není nutné žádným způsobem upravovat při portaci na jinou platformu.

Pro docílení této vysoké přenositelnosti bylo zapotřebí nevyužít žádných možností specifických pro danou platformu, a proto je možné aplikaci ovládat jak klávesnicí, tak myší nebo jiným zařízením se souřadnicovým výstupem (např. dotykový displej). Všechen multimediální obsah je přibalený a tedy též nevyužívá žádných prostředků specifických pro nějakou platformu.

Průběh prací
============

Postup prací na aplikaci se původně řídil připraveným plánem, avšak po krátké době se ukázalo, že někteří z\ nás jsou produktivnější v\ případě tvorby webového obsahu (tzn. nápovědy a internetového obchodu), někteří umí pracovat dobře s\ rastrovou grafikou a jiní zase velice dobře tvoří GUI v\ QML. Plánované rozdělení prací bylo tedy zavrženo a přešlo se na vývoj rozdělený podle schopností.

Okamžitou odezvu a bezpečné sdílení včetně verzování zajišťovaly nástroje git a jabber/ICQ. Tato kombinace se velice dobře osvědčila. Bylo sice nutné provést několik osobních schůzek, avšak výstupem těchto byl především vysokoúrovňový návrh objevivše se problémů.

Jak se aplikace vyvíjela v\ čase zachycují obrázky \ref{pic1}, \ref{pic2} a \ref{pic3}.

![Průběh vývoje \label{pic1}](../test01.jpg)

![Průběh vývoje \label{pic2}](../test02.jpg)

![Průběh vývoje \label{pic3}](../test03.jpg)

Obrázky \ref{pic0}, \ref{pic7}, \ref{pic6} a \ref{pic5} již zobrazují výslednou aplikaci.

![Výsledná aplikace \label{pic0}](../final00.jpg)

![Výsledná aplikace \label{pic7}](../final07.jpg)

![Výsledná aplikace \label{pic6}](../final06.jpg)

![Výsledná aplikace \label{pic5}](../final05.jpg)

Testování
=========

K\ testování bylo přizváno celkem 16 testerů převážně nižšího věku (přesný věk nebyl zjišťován, ale rozmezí je odhadováno na 16 až 34 let). Přesně polovině z\ nich (náhodně vybrané) byla nejprve ukázána aplikace s\ animacemi a až poté aplikace bez animací. Druhé polovině přesně naopak. Testování probíhalo na osobních počítačích testerů (aby byla eliminována reakce na cizí prostředí, která by se mohla negativně projevit na výsledcích měření), pokud byli ochotni poskytnout jejich počítač. V\ opačném případě bylo testování prováděno na noteboocích vývojářů aplikace. Ve vyhodnocení se však tyto dvě metody nerozlišují (na noteboocích testovala přibližně polovina respondentů).

Cílem testování bylo potvrdit nebo vyvrátit hypotézu, že animace pozitivním způsobem do vysoké míry zlepšují efektivnost používání aplikace a zvyšují celkový uživatelský komfort.

Měřen byl čas od spuštění aplikace po první kliknutí uživatele na tlačítko vpravo dole. Uživatel byl ještě před spuštěním zpraven o\ tom, že následující 3 až 4 minuty mu nebudou zodpovídány žádné dotazy, ale pouze budou poslouchány jeho nářky, případně chvály. Též mu bylo sděleno, že hra je pouze simulovaná pomocí slideshow. Nic více uživatel nevědel (tedy nevěděl ani to, že bude něco měřěno). Ačkoliv každý tester testoval obě varianty aplikace, měření bylo prováděno pouze u\ prvního testu, protože u\ druhého by to bylo bezpředmětné (uživatel se již s\ tím menu seznámil).

Poznámky testera během testování byly zaznamenány a ty nejzajímavější jsou uvedeny níže.

Po 3 až 4 minutách byl tester přerušen a předložena druhá aplikace. Po dalších 3 až 4 minutách byli testerovi položeny následující 3 otázky v\ tomto pořadí:

#. Proč jsi kliknul na tlačítko vpravo dole?

#. Měl bys o\ takovouto aplikaci zájem např. v\ App Store, Google Play apod.?

#. Kdyby byla funkční, kolik bys byl ochoten za ní zaplatit?

Druhý a třetí dotaz měly sloužit jako zpětná vazba pro tvůrce aplikace a nepřímo vyjadřovat celkovou spokojenost testera, a\ proto zde nejsou uvedeny. Ze všech odpovědí na první otázku byly vybrány tyto následující jako nejzajímavější:

*   Protože tam nic jiného nebylo.
*   Protože to vypadalo jako nějaké kormidelní kolo a obrázky mi připomněly piráty.
*   Já nevím, prostě mě zajímalo proč se to točí a co to udělá.
*   Protože po přejetí myši se rozsvítilo.

Z\ uvedených odpovědí lze usoudit, že animace a efekty (např. zmíněná změna světlosti po najetí myší nad oblast tlačítka) mají pozitivní dopad na uživatelskou interakci.

Poznámky testerů během 3 až 4 minut testování nebyly četné, avšak přesto byly následující citace byly vybrány jako zajímavé:

*   „A\ co s\ tím mám teďka jako dělat?“
*   „Co to je za fotky?“
*   „To by mě zajímalo, v\ čem to je naprogramované.“
*   „To je hezký!“
*   „No, je to stejný.“
*   „Tamta první se mi líbila víc.“

Předposlední a poslední citace byly zaznamenány při testování verze aplikace bez animací a to jako druhé v\ pořadí. Ostatní citace odpovídají testování animované verze a sice jako první v\ pořadí.

Ačkoliv předposlední citace nezní příliš uspokojivě, ostatní potvrzují, že tester byl aplikací zaujatý (ačkoliv ne vždy právě z\ hlediska uživatelského rozhraní).

Výsledky meření času do stisknutí tlačítka vpravo dole jsou vyneseny do níže zobrazených grafů \ref{chart1} a \ref{chart2}.

![Aplikace s\ animacemi \label{chart1}](with_anim.png)

![Aplikace bez animací \label{chart2}](without_anim.png)

V\ grafu \ref{chart1} uživatel č.\ 6 kliknul nejprve na tlačítko „exit“ a aplikace se mu zavřela, a tedy měření nedoběhlo v\ pořádku. Je\ zřejmé, že se časy mezi animovanou a neanimovanou verzí aplikace příliš neliší, ačkoliv rozdíl průměrů tvoří 0.7 sekundy ve prospěch aplikace s\ animacemi. Z\ výše uvedených komentářů je však zřejmé, že celková uživatelská přívětivost bylo u\ animované varianty lepší.

Závěr
=====

Podařilo se vytvořit obě varianty aplikace a potvrdit hypotézu, že uživatelé mají animace rádi a že jim zpříjemňují užívání aplikace. Dále bylo zjištěno, že měření uživatelské přívětivosti a vhodnosti uživatelského rozhraní je komplexní problém a velice těžko se objektivizuje a generalizuje. Uvedené citace testerů byly sice vybrány tak, aby co nejvíce charakterizovaly celou množinu zachycených citací, avšak i\ přesto je nelze považovat za rigorózní výsledek.

Bylo též ověřeno, že technologie QML je velice dobře navržená a pro vývoj moderních uživatelských rozhraní témeř ideální.

Použitá literatura a reference
==============================

*   Nokia Corporation. *Introduction to QML language* [online]. 2011------, [cit. 2012-12-08]. Dostupné na: <http://doc.qt.digia.com/qt/qdeclarativeintroduction.html>.

*   Bavagnoli, Marco. *StarMenu: custom QML component plugin* [online]. 2012-03---, [cit. 2012-12-08]. Dostupné na: <http://marcobavagnoli.wordpress.com/starmenu-custom-qml-component-plugin/>.

*   Wiseman, N. E.; Lemke, H. U.; Hiles, J. O.. *PIXIE: A New Approach to Graphical Man-Machine Communications*. Proceedings of 1969 CAD Conference Southhampton, IEEE Conference Publication 51. pp. 463.
